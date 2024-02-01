#include "Triangle.h"
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

void Triangle::SetBase(double userBase) {
    base = userBase;
}

void Triangle::SetHeight(double userHeight) {
    height = userHeight;
}

double Triangle::GetArea() const {
    return 0.5 * base * height;
}

void Triangle::PrintInfo() const {
    cout << fixed << setprecision(2);
    cout << "Base: " << base << endl;
    cout << "Height: " << height << endl;
    cout << "Area: " << GetArea() << endl;
}

bool Triangle::operator==(Triangle &other) const {
    return this->height == other.height &&
    this->base == other.base;
}

bool Triangle::operator!=(Triangle &other) const {
    return !(*this == other);
}

bool Triangle::operator<(Triangle &other) const {
    return this->GetArea() < other.GetArea();
}

bool Triangle::operator>=(Triangle &other) const {
    return !(*this < other);
}
