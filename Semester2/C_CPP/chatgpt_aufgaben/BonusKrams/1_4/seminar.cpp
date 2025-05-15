#include <iostream>
#include "seminar.h"

void listeAusgeben(const Teilnehmer teilnehmer[], int anzahl) {
    for (int i = 0; i < anzahl; i++) {
        std::cout << teilnehmer[i].name << std::endl;
    }
}

float anwesenheit(const Teilnehmer teilnehmer[], int anzahl) {
    float anwesenheit = 0.0;
    for (int i = 0; i < anzahl; i++) {
        anwesenheit += teilnehmer[i].anwesenheit;
    }
    return anwesenheit / anzahl;
}
void desinteressiert(const Teilnehmer teilnehmer[], int anzahl) {
    for (int i = 0; i < anzahl; i++) {
        if (teilnehmer[i].anwesenheit < 50)
            std::cout << teilnehmer[i].name << " hat mal voll keinen Bock. Nur " << teilnehmer[i].anwesenheit << "% anwesenheit!" << std::endl;
    }
}
