#include <iostream>
#include "statistik.h"

void wertAusgabe(const Messwerte messwerte[], int anzahl) {
    for (int i = 0; i < anzahl; i++)
        std::cout << messwerte[i].ort << ", " << messwerte[i].temperatur << " Grad Celsius, " << messwerte[i].luftfeuchtigkeit << " % Luftfeuchtigkeit." << std::endl;
}

float mittelTemperatur(const Messwerte messwerte[], int anzahl) {
    float mittel = 0.0;
    for (int i = 0; i < anzahl; i++)
        mittel += messwerte[i].temperatur;
    mittel = mittel / anzahl;
    return mittel;
}

float mittelFeuchtigkeit(const Messwerte messwerte[], int anzahl) {
    float mittel = 0.0;
    for (int i = 0; i < anzahl; i++)
        mittel += messwerte[i].luftfeuchtigkeit;
    mittel = mittel / anzahl;
    return mittel;
}
