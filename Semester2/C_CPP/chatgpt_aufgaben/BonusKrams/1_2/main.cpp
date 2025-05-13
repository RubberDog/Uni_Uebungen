#include <iostream>
#include "statistik.h"

int main() {
    Messwerte messwerte[MAX_WERTE];
    for (int i = 0; i < MAX_WERTE; i++) {
        std::cout << "Messwert "<< i + 1 << ": \n";

        std::cout << "Ort: ";
        std::getline(std::cin, messwerte[i].ort);

        std:: cout << "Temperatur: ";
        std::cin >> messwerte[i].temperatur;

        std::cout << "Luftfeuchtigkeit: ";
        std::cin >> messwerte[i].luftfeuchtigkeit;

        std::cin.ignore();
        std::cout << "\n";
    }
    wertAusgabe(messwerte, MAX_WERTE);
    std::cout << "Mittelwert Temperatur: " << mittelTemperatur(messwerte, MAX_WERTE) << " Grad Celsius." << std::endl;
    std::cout << "Mittelwert Luftfeuchtigkeit: " << mittelFeuchtigkeit(messwerte, MAX_WERTE) << " %." << std::endl;
}
