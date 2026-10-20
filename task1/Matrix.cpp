#include "Matrix.h"
#include <iostream>

Matrix::Matrix(int size) {
    m = std::vector<std::vector<float>>(size, std::vector<float>(size, 0.0));
}


Matrix::Matrix(std::vector<std::vector<float>>& values) {
    m = values;
}

Vector Matrix::operator*(Vector& vec) {
    Vector result(m.size());

    for (int i = 0; i < m.size(); i++) {
        if (m[i].size() != vec.v.size()) {
            std::cout << "Неправильный размер";
        }

        for (int j = 0; j < vec.v.size(); j++) {
            result.v[i] += m[i][j] * vec.v[j];
        }
    }

    return result;
}

void Matrix::read() {
    for (int i = 0; i < m.size(); i++) {
        for (int j = 0; j < m[i].size(); j++) {
            std::cin >> m[i][j];
        }
    }
}