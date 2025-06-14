#include <iostream>
#include <Windows.h>
#include "Header.h"
using namespace std;
int main() {
    
    // Блок для русского языка
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    setlocale(LC_ALL, "ru_RU.UTF-8");
    
    Time time1;  
    int hour, minute, second;  
    cout << "Введите час: ";
    cin >> hour;
    cout << "Введите минуту: ";
    cin >> minute;
    cout << "Введите секунду: ";
    cin >> second;

    Time time2(hour, minute, second);  
    cout << "Время : " << time2.toString() << endl;  
    cout << "Количество секунд во времени 2: " << time2.totalSeconds() << endl;  

    time2.incrementSeconds(5); 
    cout << "После увеличения времени на 5 секунд: " << time2.toString() << endl;  

    return 0;
}
