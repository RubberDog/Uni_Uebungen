#include <iostream>
#include <fstream>

class Auto {
private:
    std::string marke;
    std::string modell;
    int baujahr;
    double kmStand;
public:
    Auto(){
        marke = "Unbekannt";
        modell = "Unbekannt";
        baujahr = 2025;
        kmStand = 0.0;
    }
    Auto(std::string Marke, std::string Modell, int Baujahr, double KmStand) {
        marke = Marke;
        modell = Modell;
        baujahr = Baujahr;
        kmStand = KmStand;
    }
    ~Auto() = default;

    void setKmStand(double);
    double getKmStand() const;
    void setModell(std::string);
    std::string getModell() const;
    void anzeigen() const;
};

void Auto::setKmStand(double neuerStand){
    kmStand = neuerStand;
}
double Auto::getKmStand() const {
    return kmStand;
}
void Auto::setModell(std::string neuesModell) {
    modell = neuesModell;
}
std::string Auto::getModell() const {
    return modell;
}
void Auto::anzeigen() const {
    std::cout << "Marke: " << marke << std::endl;
    std::cout << "Modell: " << modell << std::endl;
    std::cout << "Baujahr: " << baujahr << std::endl;
    std::cout << "KM-Stand: " << kmStand << std::endl;
}

int main() {
    //Disclaimer:
    // Ich bin zu faul für Testaufrufe. Chatgpt macht.

    
    // Erstes Auto mit Startwerten initialisieren
    Auto auto1("VW", "Golf", 2021, 23000);

    // Zweites Auto mit Standardwerten
    Auto auto2;

    // Für auto1 den Kilometerstand aktualisieren
    auto1.setKmStand(24500);

    // Für auto2 das Modell setzen
    auto2.setModell("Corsa");

    // Ausgabe
    std::cout << "Auto 1:" << std::endl;
    auto1.anzeigen();

    std::cout << "\nAuto 2:" << std::endl;
    auto2.anzeigen();

    return 0;
}
