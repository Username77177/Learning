#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    // Hero's Inventory - скрипт, где мы имитируем инвентарь игрока

    const int MAX_ITEMS = 10; // Задаём константу, максимум по инвентарю игрока
    string items[MAX_ITEMS]; // Создаём массив из строк c 10 элементами
    int itemnum = 0; // Сколько вещей на данный момент в инвентаре

    items[itemnum++] = "Sword";
    items[itemnum++] = "Shield";
    items[itemnum++] = "Knife";
    cout << "На данный момент у вас " << itemnum << " вещей в инвентаре\n";
    
    bool game = true;
    do {
        cout << "Выведем ваш инвентарь: " << endl;
        for (int i = 0; i < itemnum; i++) {
            cout << items[i] << endl;
        }
        cout << "Ну, что же, к вам подходит торговец и даёт вам один топор" << endl;
        cout << "+1 топор\n";
        items[itemnum++] = "Топор";

    } while (itemnum < MAX_ITEMS);

    return 0;
}
