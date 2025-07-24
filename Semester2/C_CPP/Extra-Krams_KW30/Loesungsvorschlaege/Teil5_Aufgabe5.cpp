#include <iostream>

class Vector {
private:
    int u;
    int v;
public:
    Vector() {
        u = 0;
        v = 0;
    }
    Vector(int x, int y) {
        u = x;
        v = y;
    }
    ~Vector() = default;

    void add(Vector);
    Vector operator+(Vector);

    int getU() { return u; }
    int getV() { return v; }
};

void Vector::add(Vector v2) {
    u += v2.getU();
    v += v2.getV();
}

Vector Vector::operator+(Vector v2) {
    return Vector(u + v2.getU(), v + v2.getV());
}

int main() {
    Vector v1;
    Vector v2(2,3);
    Vector v3(4,5);
    Vector v4;
    v1.add(v2);
    v2.operator+(v3);
    v4 = v3 + v1;
}
