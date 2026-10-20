#include <vector>
#include "Vector.h"

class Matrix {
public:
    std::vector<std::vector<float>> m;  

    Matrix(int size);
    Matrix(std::vector<std::vector<float>>& values);
    
    Vector operator*(Vector& v);

    void read();
};