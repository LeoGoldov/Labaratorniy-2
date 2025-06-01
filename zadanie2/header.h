#pragma once
#include <iostream>
#include <string>

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Конструктор по умолчанию (время 00:00:00)
    Time();

    // Конструктор с параметрами (часы, минуты, секунды)
    Time(int h, int m, int s);

    // Деструктор
    ~Time();

    long long totalSeconds() const;

    void incrementSeconds(int secondsToAdd);

    std::string toString() const; 
};
