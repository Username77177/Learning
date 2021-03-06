//Coded by Username77177
//C++ Basics in a week challenge
/// Day 1 - Conditions, Cycles, Switch operator(Topic: 2 of 10)
////1
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    bool new_bool; // Новая переменная, которая принимает только два значения: true или false ( Правда или Ложь )
    new_bool = true;
    new_bool = false;

/*
 ▄█     ▄████████                                                       
███    ███    ███                                                       
███▌   ███    █▀                                                        
███▌  ▄███▄▄▄                                                           
███▌ ▀▀███▀▀▀                                                           
███    ███                                                              
███    ███                                                              
█▀     ███                                                              
                                                                        
   ▄████████  ▄█          ▄████████    ▄████████                        
  ███    ███ ███         ███    ███   ███    ███                        
  ███    █▀  ███         ███    █▀    ███    █▀                         
 ▄███▄▄▄     ███         ███         ▄███▄▄▄                            
▀▀███▀▀▀     ███       ▀███████████ ▀▀███▀▀▀                            
  ███    █▄  ███                ███   ███    █▄                         
  ███    ███ ███▌    ▄    ▄█    ███   ███    ███                        
  ██████████ █████▄▄██  ▄████████▀    ██████████                        
             ▀                                                          
   ▄████████  ▄█          ▄████████    ▄████████       ▄█     ▄████████ 
  ███    ███ ███         ███    ███   ███    ███      ███    ███    ███ 
  ███    █▀  ███         ███    █▀    ███    █▀       ███▌   ███    █▀  
 ▄███▄▄▄     ███         ███         ▄███▄▄▄          ███▌  ▄███▄▄▄     
▀▀███▀▀▀     ███       ▀███████████ ▀▀███▀▀▀          ███▌ ▀▀███▀▀▀     
  ███    █▄  ███                ███   ███    █▄       ███    ███        
  ███    ███ ███▌    ▄    ▄█    ███   ███    ███      ███    ███        
  ██████████ █████▄▄██  ▄████████▀    ██████████      █▀     ███        
*/
    // if - оператор сравнения. Он сравнивает два операнда, и если сравнение прошло успешно, то он возвращает true (правда), и выполняет блок кода, что находится ниже него
    // В противном случае, он возвращает false (ложь), и ничего не делает со своим блоком кода
    // Также существуют операторы сравнения, которые отдают такие же логические значения ( true or false )
    // >, <, == (равно), != (не равно), <=, >= (меньше либо равно, больше либо равно)
    if (3 > 5) {
        cout << "Этот текст не выведется" ;
    }
    
    if (3 != 3) {
        cout<< "Этот текст тоже не выведется"; 
    }

    if (77177 == 77177) {
        cout << "А вот этот текст уже выведется" << endl;

    }

    // Если условие верно, то оно выполнится, если нет - не выполнится
    if (true) {
        cout << "Hello, World!" << endl;
    }       

    // Если значение переменной не содержит только 0, то оно интерпретируется как правда (true)
    int null_element = 0;
    if (null_element) {
        cout << "Этот текст тоже никогда не выведется" << endl;
    }

    if (123) {
        cout << "cout'у все равно что за цифра в скобках, лишь бы не 0" << endl;
    }

////2
    // Вложенные функции if
    if (true) {
        if (2 == 2) {
            cout << "Пример вложенного условия if" << endl;
        }
    }

    // if else
    // Else - оператор, который говорит программе что делать, если условие не прошло проверку
    // (Вернуло ложь (False))
    if (false) {
        
    }
    else
    {
        cout << "Выведется этот cout" << endl;
    }
    
    // Разработаем легкую игру, которая будет говорить нам, больше ли введённое число тысячи или нет
    // SCORE RATER GAME
    int score;
    cin >> score;

    if (score > 1000) {
        cout<< "Ваше число " << score << " больше, чем 1000!" << endl;
    }

    else
    {
        cout << "Ваше число определённо меньше 1000" << endl;
    }

    // SCORE RATER GAME END

////3

    // Ветвление с Else if (будем называть его elif)
    // Else if - "в остальном, если", то есть проверка на это условие будет проверяться, только если главная проверка (if) прошла и завершилась результатом false
    if (false) {
        cout<< "if - вернул false (сообщение не выведется)";
    }
    else if (true) {
        cout << "А вот это сообщение выведется" << endl; 
    }
    else {
        cout << "Это сообщение тоже не выведется, просто потому, что условие выше вернуло true";
    }

    // Switch - оператор выбора
    // Объявляем новую переменную и вводим в неё значения
    cout << "Добрейший вечерочек, введите значение:\n0 - Добрейший вечерочек\n1 - привет\n2 - Здравствуйте\n";
    int New_String;
    cin >> New_String;
    
    switch (New_String) {
        case 0:
            cout << "Как вы вежливы!" << endl;
            break;
        case 1:
            cout << "Можно как-то вежливее?"<< endl;
            break;
        case 2:
            cout << "Я футбольный мячик, бом-бом"<< endl;
            break;
        default:
            cout << "Вы не ввели цифру, как это оговаривалось выше, бунтарь" << endl;
    }

    return 0;
}
