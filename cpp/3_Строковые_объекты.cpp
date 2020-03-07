#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    //Строковые объекты можно задавать тремя способами:
    string first_str = "First string init";
    string second_str("Second string init");
    string third_str(3,'!'); // Output: !!!

    //Строки можно сцеплять (это называется конкатенация)
    string game_word("Game");
    string over_word = "Over";
    string new_string = game_word + over_word; // Конкатенация. Output: GameOver
    cout << new_string << endl;

    //Длина строки
    //Длину строки можно вычислить двумя функциями-членами: size() и length()
    cout << "first_str.size() = " << first_str.size() << endl;
    cout << "second_str.length() = " << second_str.length() << endl;

    //Индексация элементов
    cout << "Выводим первый элемент из слова GameOver: " << new_string[0] << endl;
    //Можно также менять буквы
    new_string[0] = 'L';
    cout << new_string << endl;

    //Поиск элементов в строке и функция find() 
    //Следует заранее оговорить, что когда find() не находит заданный элемент, то оно возвращает string::npos
    int index_new_str = new_string.find("Over"); // Вернёт нам индекс, где впервые встречается данное слово
    // ДОПОЛНИТЕЛЬНО: Если дать функции find() второй аргумент, то можно задать с какого элемента по индексу стоит начать поиск
    if (new_string.find("Triangle") == string::npos) {
        cout << "Слово Triangle не находится в " << new_string << endl;
    }

    //erase() - функция, которая удаляет подстроку из строки
    string new_string2 = new_string.erase(0,3);
    // Первый аргумент - с какого символа (по индексу) начинаем, второй аргумент - сколько элементов удаляем

    //empty() - функция, которая проверяет пустая ли строка, и возвращает true, если она пустая
    string empty = "";
    if (empty.empty()) {
        cout << "Строка empty - пустая строка" << endl; 
    }

    return 0;
}
