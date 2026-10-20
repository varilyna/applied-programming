#include <iostream>
#include "Matrix.h"

int main() {
    int size;

    std::cout << "Размер\n";
    std::cin >> size;

    Matrix A(size);
    Vector b(size);

    std::cout << "Матрица А\n";
    A.read();

    std::cout << "Вектор b\n";
    b.read();

    std::cout << "Число итераций\n";
    int n;
    std::cin >> n;

    Vector x(size);

    for (int i = 0; i < n; i++) {
        x = x + (A * x - b);
        x.print();
    }

    return 0;
}