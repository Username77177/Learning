#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char *argv[])
{
    // Игра, которая будет загадывать число, а мы должны будем его отгадать
    // Также мы должны выводить число попыток, за которое мы нашли число
    //

    srand(time(0)); // Сид
    cout << "\t\tGuess the number\n";

    // Переменные
    //
    bool game = true;
    int tries = 1;
    int random_number = rand() % 51;
    int guess;

    cout << "Я загадал число от 0 до 50. У тебя n попыток, чтобы разгадать его: ";

    do {
    // Game
    //
    cin >> guess;

    if (guess < random_number) {
        cout << "\nСлишком мало!\n" << endl; 
        ++tries;
        cout << "Давай ещё: ";
    }
    else if (guess > random_number) {
        cout << "\nСлишком много!\n\n"; 
        ++tries;
        cout << "Давай ещё: ";
    }

    } while (guess != random_number);    
    cout << "О, да! Ты угадал число за " << tries << " попыток! Молодец" << endl;
    return 0;
}
