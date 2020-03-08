#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[])
{
    // Игра которая будет менять буквы в словах местами
    string array_with_words[10] = {"Apple", "Banana", "Pussy", "Potato", "Hamburger", "Rice", "Chocolate", "Pie", "Mango", "Cake"}; // Слова, которые игра будет мешать
    srand(time(NULL)); 
    bool game = true; //Try again variable
    do {
        
        int random_word = rand() % 10; // Выбор случайного индекса
        string our_word = array_with_words[random_word]; // Выбор случайного слова

        short int len_our_word = our_word.length(); // Длина нашего слова
        int random_index_for_word1; // Переменная, которая будет задавать, какие значения индексов в слове поменять местами
        int random_index_for_word2; // Переменная, которая будет задавать, какие значения индексов в слове поменять местами
        char temp;
        // Перемишивать буквы в слове будем 3 раза
    
        for (int i = 0; i < 4; ++i) {
            random_index_for_word1 = rand() % len_our_word;
            random_index_for_word2 = rand() % len_our_word;
            temp = our_word[random_index_for_word2];
            our_word[random_index_for_word2] = our_word[random_index_for_word1];
            our_word[random_index_for_word1] = temp;
        }
        cout << our_word << endl;
        string inpu;
        int tries = 0;
        while (tries < 3) {
            cout << "Что это за слово?" << endl; 
            cin >> inpu;
            if (inpu == array_with_words[random_word]) {
                cout << "Вы отгадали слово!" << endl;
                break;
            }
            cout << "Неверный ответ";
            tries++;
        }
        cout << "Хотите попробывать ещё раз? [1 - да, 0 - нет]: ";
        cin >> random_word;
        if (random_word == 0) {
            break; 
        }
    } while (game);

    return 0;
}
