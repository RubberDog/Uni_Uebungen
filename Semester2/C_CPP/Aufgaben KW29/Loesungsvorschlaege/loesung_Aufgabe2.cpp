#include <iostream>

class Punkt {
private:
    double x,y,z;
public:
    Punkt() {
        x = 0.0;
        y = 0.0;
        z = 0.0;
    }
    Punkt(double xVal, double yVal, double zVal) {
        x = xVal;
        y = yVal;
        z = zVal;
    }
    ~Punkt() = default;

    double getX() const { return x; }
    double getY() const { return y; }
    double getZ() const { return z; }

    Punkt add(const Punkt& p2) const {
        return Punkt(x+p2.getX(), y + p2.getY(), z + p2.getZ());
    }
    Punkt operator+(const Punkt& p2) const {
        return Punkt(x+p2.getX(), y + p2.getY(), z + p2.getZ());
    }
};

int main() {
    Punkt p9;
    Punkt p8(6.0,7.0,9.0);
    Punkt p7 = p8.add(p9);
    Punkt p345 = p8.operator+(p9);
    Punkt p6 = p8 + p9;
    std::cout << "p7.x = " << p7.getX() << ", p7.y = " << p7.getY() << ", p7.z = " << p7.getZ() << std::endl;
    std::cout << "p6.x = " << p6.getX() << ", p6.y = " << p6.getY() << ", p6.z = " << p6.getZ() << std::endl;
}
