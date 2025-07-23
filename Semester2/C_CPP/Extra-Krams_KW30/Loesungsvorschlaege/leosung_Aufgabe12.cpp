#include <iostream>
#include <fstream>
#include <string>

class Produkt {
private:
    std::string Name;
    double Preis;
    int Lagerbestand;
public:
    Produkt() {
        Name = "DefaultValue";
        Preis = 1.00;
        Lagerbestand = 0;
    }
    Produkt(std::string name, double preis, int lagerbestand) {
        Name = name;
        Preis = preis;
        Lagerbestand = lagerbestand;
    }
    ~Produkt() = default;

    void auffuellen(int);
    void verkaufen(int);
    void setPreis(double);
    std::string getName() const;
};

void Produkt::auffuellen(int menge) {
    Lagerbestand += menge;
}

void Produkt::verkaufen(int menge) {
    Lagerbestand -= menge;
}

void Produkt::setPreis(double neuerPreis) {
    Preis = neuerPreis;
}

std::string Produkt::getName() const { return Name; }

int main() {
    Produkt p1;
    Produkt p2("Doener", 2.99, 5);
    std::cout << "P1 Name= " << p1.getName();
}
