#include <iostream>
#include <string>

class Bruch {
private:
    int Zaehler, Nenner;
    int ggt(int z, int n) {
        while (n != 0) {
            int rest = z % n;
            z = n;
            n = rest;
        }
        return z;
    }
public:
    Bruch() {
        Zaehler = 1;
        Nenner = 2;
    }
    Bruch(int zaehler, int nenner) {
        Zaehler = zaehler;
        Nenner = nenner;
    }
    ~Bruch() = default;

    int getZaehler() {
        return Zaehler;
    }

    int getNenner() {
        return Nenner;
    }

    void kuerzen();
    void add(Bruch);
    void operator+(Bruch);
};

void Bruch::kuerzen() {
    int bggt = ggt(Zaehler,Nenner);
    Zaehler /= bggt;
    Nenner /= bggt;
}

void Bruch::add(Bruch b2) {
    Zaehler = Zaehler * b2.getNenner() + b2.getZaehler() * Nenner;
    Nenner = Nenner * b2.getNenner();
}

void Bruch::operator+(Bruch b2) {
    Zaehler = Zaehler * b2.getNenner() + b2.getZaehler() * Nenner;
    Nenner = Nenner * b2.getNenner();
}


int main() {

    // Disclaimer; Testaufrufe von chatgpt erstellt, das ist mir zu viel nerviges getippe.
    
    // Standardkonstruktor
    Bruch b1;
    std::cout << "b1 (Standardkonstruktor): "
              << b1.getZaehler() << "/" << b1.getNenner() << std::endl;

    // Initialisierungskonstruktor
    Bruch b2(2, 3);
    Bruch b3(1, 6);
    std::cout << "b2: " << b2.getZaehler() << "/" << b2.getNenner() << std::endl;
    std::cout << "b3: " << b3.getZaehler() << "/" << b3.getNenner() << std::endl;

    // Test der add-Funktion
    b2.add(b3);  // b2 = 2/3 + 1/6 = (2*6 + 1*3)/(3*6) = 15/18
    std::cout << "b2 nach b2.add(b3): "
              << b2.getZaehler() << "/" << b2.getNenner() << std::endl;

    // Test kuerzen()
    b2.kuerzen();  // 15/18 -> 5/6
    std::cout << "b2 nach kuerzen(): "
              << b2.getZaehler() << "/" << b2.getNenner() << std::endl;

    // Test operator+ (Achtung: verändert b1 direkt!)
    std::cout << "b1 vor b1 + b3: "
              << b1.getZaehler() << "/" << b1.getNenner() << std::endl;
    b1 + b3;  // b1 = 1/2 + 1/6 = (1*6 + 1*2)/(2*6) = 8/12
    std::cout << "b1 nach b1 + b3: "
              << b1.getZaehler() << "/" << b1.getNenner() << std::endl;
    b1.kuerzen();  // 8/12 -> 2/3
    std::cout << "b1 nach kuerzen(): "
              << b1.getZaehler() << "/" << b1.getNenner() << std::endl;

    return 0;
}
