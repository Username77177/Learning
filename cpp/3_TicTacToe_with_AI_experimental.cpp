#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int AI_turn_func(char arr[9]) {
/*
 * Функция, которая выбирает на какую ячейку компьютер сделает свой ход
 */
    while (true) {
        int choice = rand() % 9;
        if (arr[choice] == ' ') {
            return choice;
        }
    }
}

int check_desk_win(char arr[9],int who) {
/*
 * Данная функция проверяет заполнено ли поле полностью и выиграл ли кто-то
 * CHECK == 1 - Ничья
 * CHECK == 2 - Игрок выиграл
 * CHECK == 3 - ИИ выиграл
 */
    // Check if desk full
    int full_var = 0;
    for (int i = 0; i < 9; i++) {
        if (arr[i] == 'X' || arr[i] == 'O') {
            ++full_var;
        } 
    }
    if (full_var == 8) {
        return 1;    
    }

    if ((arr[0] == arr[3] == arr[6] || arr[0] == arr[1] == arr[2] || arr[0] == arr[4] == arr[8] || arr[1] == arr[4] == arr[7] || arr[2] == arr[4] == arr[6] || arr[2] == arr[5] == arr[8] || arr[3] == arr[4] == arr[5] || arr[6] == arr[7] == arr[8]) != ' ') {
        if (who == 0) {
            return 2;
        } 
        else {
            return 1;
        }
    }
}

int main(int argc, char *argv[])
{
    // Игра крестики-нолики с AI
    cout << "\tКрестики-нолики" << endl;

    cout << "Игровое поле: \n";
    cout << "\t\t7 | 8 | 9\n";
    cout << "\t\t4 | 5 | 6\n";
    cout << "\t\t1 | 2 | 3\n";

    char symbols[2] = {'X','O'};
    char game_desk[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player_symbol;
    cout << "Выбери за кого будешь играть [x или o]: ";
    do {
        cin >> player_symbol; 
        if (tolower(player_symbol) == 'x') {
            // tolower() - превращает систроки (char[]) в систроки с нижним регистром
            player_symbol = symbols[0];
        }
        else if (tolower(player_symbol) == 'o') {
            player_symbol = symbols[1];
        }
    } while (player_symbol != symbols[0] && player_symbol != symbols[1]);
    // Тут была ошибка. Нельзя использовать || при указании условий в while
    // Нужно чтобы строго выполнялись два условия. Поэтому связь должна быть И
    // При связи ИЛИ должно выполняться хотя бы одно условие.
    // Т.к. условия у нас два, то при X, условие o не верно, и цикл продолжает свое действие

    // Выбор символа для ИИ
    int AI_symbol;
    if (player_symbol == symbols[0]) {
        AI_symbol = symbols[1]; 
    }
    else
    {
        AI_symbol = symbols[0];
    }

    // Выбор первого игрока
    srand(time(0));
    int whofirst = rand() % 2;
    if (whofirst == 1) {
        cout << "Вы ходите первым!\n";
    }
    else {
        cout << "О, нет! Могучий ИИ ходит первым\n";
    }
    // Самый простой ИИ
    // ИИ должен выбрать число от 0 до 8 включительно. Если оно заполнено, то он выполняет цикл ещё раз, если нет, то ставит точку в клетку
    //
    //Game
    int AI_turn;
    int check;
    int inp;
    do {
        if (whofirst == 1) {
            // Выводим доску
            for (int i = 8; i >= 0; i--) {
                cout << "  " << game_desk[i];
                if (i % 3 == 0) {
                    cout << endl; 
                }
            }
            cout << "Выберите на NumPad куда хотите походить: ";
            do {
                cin >> inp;
                if (game_desk[inp] == ' ') {
                    game_desk[inp] = player_symbol;
                    break; 
                }
            } while (true);
            check_desk_win(game_desk,whofirst);
            --whofirst;
            // Выводим доску
            for (int i = 8; i >= 0; i--) {
                cout << "  " << game_desk[i];
                if (i % 3 == 0) {
                    cout << endl; 
                }
            }
        } 
        else {
            // Выводим доску
            for (int i = 8; i >= 0; i--) {
                cout << "  " << game_desk[i];
                if (i % 3 == 0) {
                    cout << endl; 
                }
            }
            AI_turn = AI_turn_func(game_desk);
            game_desk[AI_turn] = AI_symbol;
            check = check_desk_win(game_desk,whofirst);
            ++whofirst;
            // Выводим доску
            for (int i = 8; i >= 0; i--) {
                cout << "  " << game_desk[i];
                if (i % 3 == 0) {
                    cout << endl; 
                }
            }
        }
    } while (check != 1);

    return 0;
}

