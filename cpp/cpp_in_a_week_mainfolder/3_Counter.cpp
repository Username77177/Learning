#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    // Программа которая должна будет считать числа с разными интервалами
    // Нужно вывести последовательность из 10 чисел
    //

    cout << "Привет! Это программа \"Counter\". Введите любое число, и давайте посчитаем последовательность: ";
    int num_;
    cin >> num_;

    for (int i = 0; i < num_ * 10; i+=num_) {
        cout << i << endl;
    }
    return 0;
}
