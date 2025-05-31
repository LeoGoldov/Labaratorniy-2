#include "Header.h"
Product::Product(double c, double m) {
    calories100g = c;
    weight = m;
}
double Product::calculate() {
    return (calories100g / 100.0) * weight;
}

