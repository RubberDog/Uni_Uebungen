#include <iostream>
#include "seminar.h"

int main() {
    Teilnehmer teilnehmer[MAX_TEILNEHMER];
    for (int i = 0; i < MAX_TEILNEHMER; i++) {
        std::cout << "Teilnehmer " << i+1 << ": \n";

        std::cout << "Name: ";
        std::getline(std::cin, teilnehmer[i].name);

        std::cout << "Teilnehmernr: ";
        std::cin >> teilnehmer[i].teilnehmernr;

        std::cout << "Anwesenheit: ";
        std::cin >> teilnehmer[i].anwesenheit;

        std::cin.ignore();
        std::cout << "\n";
    }
    listeAusgeben(teilnehmer, MAX_TEILNEHMER);
    anwesenheit(teilnehmer, MAX_TEILNEHMER);
    desinteressiert(teilnehmer, MAX_TEILNEHMER);
}
