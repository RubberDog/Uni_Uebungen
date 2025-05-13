#ifndef LAGER_H
#define LAGER_H

#include <string>

struct Produkt {
    std::string name;
    int artikelnr;
    float preis;
};

const int MAX_PRODUKTE = 5;

void produkteAusgeben(const Produkt produkte[], int anzahl);
float teuerstesProdukt(const Produkt produkte[], int anzahl);

#endif
