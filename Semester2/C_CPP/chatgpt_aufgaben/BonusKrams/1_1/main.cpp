#include <iostream>
#include "lager.h"

int main() {
    Produkt produkte[MAX_PRODUKTE];
    for (int i = 0; i < MAX_PRODUKTE; ++i) {
        std::cout << "Produkt " << i + 1 << ":\n";

        std::cout << "Name: ";
        std::getline(std::cin, produkte[i].name);

        std::cout << "Artikelnummer: ";
        std::cin >> produkte[i].artikelnr;

        std::cout << "Preis: ";
        std::cin >> produkte[i].preis;

        std::cin.ignore();
        std::cout << "\n";
    }
    produkteAusgeben(produkte, MAX_PRODUKTE);
    float maxPreis = teuerstesProdukt(produkte, MAX_PRODUKTE);
    std::cout << "Teuerstes Produkt: " << maxPreis << std::endl;
}
