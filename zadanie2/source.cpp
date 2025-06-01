#include "Header.h"
#include <string>

// Конструктор по умолчанию (время 00:00:00)
Time::Time() : hour(0), minute(0), second(0) {}
// Конструктор с параметрами (часы, минуты, секунды)
Time::Time(int h, int m, int s) : hour(h), minute(m), second(s) {}
// Деструктор 
Time::~Time() {}
long long Time::totalSeconds() const {
    return (long long)hour * 3600 + (long long)minute * 60 + (long long)second;
}
// увеличения времени на заданное количество секунд
void Time::incrementSeconds(int secondsToAdd) {
    second += secondsToAdd;       
    minute += second / 60;        
    second %= 60;                
    hour += minute / 60;         
    minute %= 60;                
    hour %= 24;                
}
std::string Time::toString() const { 
    return std::to_string(hour) + ":" + std::to_string(minute) + ":" + std::to_string(second); // Исправлено: std::to_string
}

