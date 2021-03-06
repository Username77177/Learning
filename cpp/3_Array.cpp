#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    // Функции-члены массивов
    // Можно обратиться к строке в массиве прямо с массива
    string array[3] = {"New_array", "Hello", "Hi"}; // Массив, забитый случайными словами
    cout << array[0].size() << " - длина первого элемента в массиве\n";
    return 0;

    // С-строки
    // Си-строки появились ещё в языке С. У них нет методов. Это даже не класс, строго говоря. Это просто последовательность символов
    // Функции для работы с си-строками содержатся в файле cstring
    char word[] = "New World"; // Один из способов объявить си-строку
    char word2[30] = "Another World"; // Ещё один способ инициализировать си-строку строго указать её размер
    // Однако, тут стоит помнить, что в си-строках есть "нулевой элемент" - элемент окончания строки.
    // Поэтому в word2 есть 29 активных ячеек и одна зарезервированная под элемент "\0"
    return 0;
}
