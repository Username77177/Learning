#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    // Программа показывающая как работает for    
    //
    
    // Обычный счёт от 0 до 10
    //
    cout << "Вперёд: ";
    for (int i = 0; i < 10; ++i) {
        cout << i << " "; 
    }
    cout << endl;

    // C 10 до 0
    cout << "Назад: ";
    for (int i = 10; i > 0; --i) {
        cout << i << " "; 
    }
    cout << endl;

    // Через 5 единиц
    cout << "Через 5 единиц: ";
    for (int i = 0; i < 50; i+=5) {
        cout << i << " ";
    }
    cout << endl;

    // С вложенным циклом
    cout << "С вложенным циклом: "<< endl;
    for (int i = 0; i < 10; ++i) {
        for (double j = 0; j < 3; ++j) {
            cout << i+(j/10) << "\t";
        } 
        cout << endl;
    }
    return 0;
}
