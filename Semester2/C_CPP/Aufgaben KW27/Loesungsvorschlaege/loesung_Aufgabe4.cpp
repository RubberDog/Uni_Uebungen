#include <iostream>

int kapital(double GK, double Z, int LZ, double &Endkapital) {
    if (GK < 0.0)
        return 0;
    Endkapital = GK + ((GK / 100) * Z * LZ);
    return 1;
}

int main() {
    double Grundkapital = 3456.67;
    double Zinsen = 2.25;
    int Laufzeit = 25;
    double Endkapital;

    std::cout << "Returnwert: " << kapital(Grundkapital, Zinsen, Laufzeit, Endkapital) << std::endl;
    std::cout << "Endkapital: " << Endkapital << " in welcher Währung auch immer.." << std::endl;
}
