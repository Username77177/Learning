#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    cout << "\t\tGame Designer's Network" << endl;
    // Если пользователь вводит в бланк Username, или Password слово "guest", то мы можем дать ему доступ к сети
    string username, pass;
    // Переменная для того, чтобы отслеживать вошёл ли кто-то и нужно ли делать повторную аутентификацию
    bool AuthValid = false;

    do {
        cout << "Username: ";
        cin >> username;
    
        cout << "Password: ";
        cin >> pass;
    
        // Чтобы не прописывать true в AuthValid 3 раза, мы пропишем AuthValid = false в else 1 раз
        AuthValid = true;
        if (username == "guest" || pass == "guest") {
            cout << "Welcome, Guest!\n";
        }
        else if (username == "Username77177" && pass == "SecretPaSsWoRd") {
            cout << "Welcome, Username77177\n";
        }
        else if (pass == "root") {
            cout << "Welcome, " << username << endl;
        }
        else {
            cout << "Authorization Failed" << endl;
            AuthValid = false;
        }
        // Просто выводим пустую строку, чтобы отделить предыдущую сессию логина
        cout << "\n";
    } while (!AuthValid);

    // Стоит заметить, что даже когда AuthValid = true, цикл while не прекращает своей работы, а просто идёт дальше. Вывод: цикл можно прервать только break и continue
    return 0;
}
