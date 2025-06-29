#ifndef STATISTIK_H
#define STATISTIK_H

#include <string>

struct Messwerte {
    std::string ort;
    float temperatur;
    float luftfeuchtigkeit;
};

const int MAX_WERTE = 10;

void wertAusgabe(const Messwerte messwerte[], int anzahl);
float mittelTemperatur(const Messwerte messwerte[], int anzahl);
float mittelFeuchtigkeit(const Messwerte messwerte[], int anzahl);


#endif
