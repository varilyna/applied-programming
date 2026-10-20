#include "Vector.h"
#include <iostream>

Vector::Vector(int size) {
    v = std::vector<float>(size, 0.0);
}

Vector::Vector(std::vector<float>& values) {
    v = values;
}



Vector Vector::operator-(Vector other) {
    Vector result(v.size());

    for (int i = 0; i < v.size(); i++) {
        result.v[i] = v[i] - other.v[i];
    }

    return result;
}

Vector Vector::operator+(Vector other) {
    Vector result(v.size());

    for (int i = 0; i < v.size(); i++) {
        result.v[i] = v[i] + other.v[i];
    }

    return result;
}

void Vector::print() {
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ' ';
    }
    std::cout << '\n';
}

void Vector::read() {
    for (int i = 0; i < v.size(); i++) {
        std::cin >> v[i];
    }
}