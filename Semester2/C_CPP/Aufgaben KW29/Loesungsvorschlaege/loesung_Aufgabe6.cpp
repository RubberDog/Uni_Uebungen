#include <iostream>
#include <string>

class Temperatur {
private:
    double gradzahl;
public:
    Temperatur() {
        gradzahl = 0.0;
    }

    Temperatur(double wert) {
        gradzahl = wert;
    }

    ~Temperatur() = default;

    double toFahrenheit();
    double toKelvin();
    void setTemperatur(double);
    double getTemperatur();
};

double Temperatur::toFahrenheit() {
    return ((gradzahl * 1.8) + 32);
}
double Temperatur::toKelvin() {
    return gradzahl + 273.15;
}
void Temperatur::setTemperatur(double wert) {
    gradzahl = wert;
}
double Temperatur::getTemperatur() {
    return gradzahl;
}

int main() {
    // Disclaimer: Test-Aufrufe wegen akuter Faulheit durch chatgpt erstellen lassen
    // Standardkonstruktor
    Temperatur t1;
    std::cout << "Standard-Temperatur in Celsius: " << t1.getTemperatur() << "°C\n";
    std::cout << "In Fahrenheit: " << t1.toFahrenheit() << "°F\n";
    std::cout << "In Kelvin: " << t1.toKelvin() << " K\n\n";

    // Konstruktor mit Wert
    Temperatur t2(25.0);
    std::cout << "Temperatur t2 in Celsius: " << t2.getTemperatur() << "°C\n";
    std::cout << "In Fahrenheit: " << t2.toFahrenheit() << "°F\n";
    std::cout << "In Kelvin: " << t2.toKelvin() << " K\n\n";

    // Temperatur ändern
    t2.setTemperatur(-10.0);
    std::cout << "Nach Änderung: t2 in Celsius: " << t2.getTemperatur() << "°C\n";
    std::cout << "In Fahrenheit: " << t2.toFahrenheit() << "°F\n";
    std::cout << "In Kelvin: " << t2.toKelvin() << " K\n\n";

    // Weitere Beispiele
    Temperatur t3(100.0);
    std::cout << "Siedepunkt Wasser: " << t3.getTemperatur() << "°C\n";
    std::cout << "In Fahrenheit: " << t3.toFahrenheit() << "°F\n";
    std::cout << "In Kelvin: " << t3.toKelvin() << " K\n";

    return 0;
}
