#include <iostream>
#include <string>

class Rechteck {
private:
    double seiteA;
    double seiteB;
public:
    Rechteck() {
        seiteA = 2;
        seiteB = 4;
    }

    Rechteck(double a, double b) {
        seiteA = a;
        seiteB = b;
    }

    ~Rechteck() {

    }

    double berechneFlaeche() {
        return seiteA * seiteB;
    }

    double berechneUmfang() {
        return 2 * (seiteA + seiteB);
    }

    double getSeiteA() {
        return seiteA;
    }

    double getSeiteB() {
        return seiteB;
    }

    bool operator==(const Rechteck& r2) const {
        return (seiteA == r2.seiteA) && (seiteB == r2.seiteB);
    }
};

int main() {
    // Disclaimer; Faulheit. Testaufrufe durch chatgpt.
    // Standard-Rechteck
    Rechteck r1;
    std::cout << "r1: Seite A = " << r1.getSeiteA()
              << ", Seite B = " << r1.getSeiteB() << "\n";
    std::cout << "Fläche von r1: " << r1.berechneFlaeche() << "\n";
    std::cout << "Umfang von r1: " << r1.berechneUmfang() << "\n\n";

    // Rechteck mit gleichen Maßen wie r1
    Rechteck r2(2, 4);
    std::cout << "Vergleich r1 == r2: ";
    if (r1 == r2) {
        std::cout << "r1 und r2 sind gleich.\n";
    } else {
        std::cout << "r1 und r2 sind unterschiedlich.\n";
    }
    std::cout << "\n";

    // Rechteck mit vertauschten Seiten
    Rechteck r3(4, 2);
    std::cout << "Vergleich r1 == r3: ";
    if (r1 == r3) {
        std::cout << "r1 und r3 sind gleich.\n";
    } else {
        std::cout << "r1 und r3 sind unterschiedlich.\n";
    }
    std::cout << "\n";

    // Rechteck mit anderen Seitenlängen
    Rechteck r4(3, 5);
    std::cout << "r4: Fläche = " << r4.berechneFlaeche()
              << ", Umfang = " << r4.berechneUmfang() << "\n";

    std::cout << "Vergleich r1 == r4: ";
    if (r1 == r4) {
        std::cout << "r1 und r4 sind gleich.\n";
    } else {
        std::cout << "r1 und r4 sind unterschiedlich.\n";
    }

    return 0;
}
