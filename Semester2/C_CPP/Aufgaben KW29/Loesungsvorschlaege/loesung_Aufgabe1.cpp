#include <iostream>

class Punkt {
public:
    double x, y;
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

};

Punkt Punkt::add(const Punkt& p2) {
    return Punkt(x + p2.x, y + p2.y);
}

Punkt Punkt::operator+(const Punkt& p2) {
    return Punkt(x + p2.x, y + p2.y);
}

int main() {
    Punkt p1;
    Punkt p2(4.5, 4.5);
    Punkt p3 = p1.add(p2);
    std::cout << "Mit add: \n";
    std::cout << "p3.x = " << p3.x << ", p3.y = " << p3.y << std::endl;
    Punkt p4 = p2+p1;
    std::cout << "Mit operator+: \n";
    std::cout << "p4.x = " << p4.x << ", p4.y = " << p4.y << std::endl;
}
