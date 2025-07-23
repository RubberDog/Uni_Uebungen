#include <iostream>
#include <fstream>
#include <string>

class Datum {
private:
    int Tag;
    int Monat;
    int Jahr;
public:
    Datum() {
        Tag = 1;
        Monat = 1;
        Jahr = 2000;
    }
    Datum(int tag, int monat, int jahr) {
        Tag = tag;
        Monat = monat;
        Jahr = jahr;
    }
    ~Datum() = default;

    void setMonat(int monat);
    int getJahr() const;
    bool operator==(Datum);
};

void Datum::setMonat(int monat) {
    Monat = monat;
}

int Datum::getJahr() const {
    return Jahr;
}

bool Datum::operator==(Datum d2) {
    if ((Tag == d2.Tag) && (Monat == d2.Monat) && (Jahr == d2.Jahr))
        return true;
    else
        return false;
}

int main() {
    Datum d1;
    Datum d2(1,1,2000);
    bool v1 = d1 == d2;
    bool v2 = d1.operator==(d2);
    std::cout << "Vergleich Daten mit == " << v1 << std::endl;
    std::cout << "Vergleich mit vollständigem Aufruf d1.operator==(d2): " << v2 << std::endl;
}
