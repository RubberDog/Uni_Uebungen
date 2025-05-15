#ifndef SEMINAR_H
#define SEMINAR_H

#include <string>

const int MAX_TEILNEHMER = 4;

struct Teilnehmer {
    std::string name;
    int teilnehmernr;
    int anwesenheit;
};

void listeAusgeben(const Teilnehmer teilnehmer[], int anzahl);
float anwesenheit(const Teilnehmer teilnehmer[], int anzahl);
void desinteressiert(const Teilnehmer teilnehmer[], int anzahl);


#endif
