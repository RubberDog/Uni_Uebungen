#include <iostream>
#include "lager.h"

void produkteAusgeben(const Produkt produkte[], int anzahl) {
    for (int i = 0; i < anzahl; i++) {
        std::cout << produkte[i].name << std::endl;
    }
}

float teuerstesProdukt(const Produkt produkte[], int anzahl) {
    float maxPreis = 0.0;
    for (int i = 0; i < anzahl; i++) {
        if (produkte[i].preis > maxPreis)
            maxPreis = produkte[i].preis;
    }
    return maxPreis;
}
