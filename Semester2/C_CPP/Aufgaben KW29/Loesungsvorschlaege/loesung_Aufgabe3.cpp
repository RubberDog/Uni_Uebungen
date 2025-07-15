#include <iostream>
#include <string>

class Konto {
private:
    int kontonummer;
    std::string kontoinhaber;
    double kontostand;
public:
    Konto() {
        kontonummer = 12345;
        kontoinhaber = "Max Mustermann";
        kontostand = 0.0;
    }
    Konto(int nummer, const std::string& inhaber, double stand) {
        kontonummer = nummer;
        kontoinhaber = inhaber;
        kontostand = stand;
    }
    ~Konto() {

    }

    void Einzahlen(double);
    void Auszahlen(double);
    void SetKontonummer(int);
    int GetKontonummer() const;
    double getKontostand() const;

};

void Konto::Einzahlen(double summe) {
    kontostand += summe;
}

void Konto::Auszahlen(double summe) {
    kontostand -= summe;
}

void Konto::SetKontonummer(int neueNummer) {
    kontonummer = neueNummer;
}

int Konto::GetKontonummer() const { return kontonummer; }

double Konto::getKontostand() const { return kontostand; }

int main() {
    Konto k1(9876, "Lieselchen Mueller", 1337.38);
    Konto k2(8765, "Karl-Heinz", 4554.54);
    std::cout << "Kontostand k1 vor Einzahlung: " << k1.getKontostand() << std::endl;
    k1.Einzahlen(500.00);
    std::cout << "Nach Einzahlung 500.00: " << k1.getKontostand() << std::endl;
    std::cout << "Kontostand k2 vor Auszahlung: " << k2.getKontostand() << std::endl;
    k2.Auszahlen(554.54);
    std::cout << "Kontostand k2 nach Auszahlung 554.54: " << k2.getKontostand() << std::endl;
}
