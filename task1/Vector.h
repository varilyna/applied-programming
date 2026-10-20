#include <vector>

class Vector {
public:
    std::vector<float> v;

    Vector(int size);
    Vector(std::vector<float>& values);

    Vector operator+(Vector other);
    Vector operator-(Vector other);

    void print();
    void read();
};