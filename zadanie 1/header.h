#pragma once
#include <iostream>
class Product {
private:
    double calories100g;
    double weight;

public:
    // Конструктор
    Product(double c, double m);

    // вычисление общей калорийности
    double calculate();
};

