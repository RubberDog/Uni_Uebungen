#include <iostream>

class Punkt {
private:
    double x, y;
public:
    Punkt(){
        x = 0.0;
        y = 0.0;
    }
    Punkt(double xVal, double yVal){
        x = xVal;
        y = yVal;
    }
    ~Punkt(){
    }

    Punkt add(const Punkt&);
    Punkt operator+(const Punkt&);

    double getX() const { return x; }
    double getY() const { return y; }

};

Punkt Punkt::add(const Punkt& p2) {
    return Punkt(x + p2.getX(), y + p2.getY());
}

Punkt Punkt::operator+(const Punkt& p2) {
    return Punkt(x + p2.getX(), y + p2.getY());
}

int main() {
    Punkt p1;
    Punkt p2(7.5, 4.5);
    Punkt p3 = p1.add(p2);
    std::cout << "Mit add: \n";
    std::cout << "p3.x = " << p3.getX() << ", p3.y = " << p3.getY() << std::endl;
    Punkt p4 = p2+p1;
    std::cout << "Mit operator+: \n";
    std::cout << "p4.x = " << p4.getX() << ", p4.y = " << p4.getY() << std::endl;
}
