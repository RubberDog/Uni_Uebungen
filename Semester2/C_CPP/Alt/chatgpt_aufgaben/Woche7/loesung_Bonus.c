#include <stdio.h>
#include <string.h>

#define STUDENTENZAHL 5

typedef struct {
	char name[50];
	double notenschnitt;
	int matrikel;
} Studenten;

void ausgabe(Studenten *studis, int anzahl) {
	printf("Liste der Studenten:\n");
	for (int i = 0; i < anzahl; i++) {
		printf("%s, Matrikelnr: %d, Notenschnitt %1.1lf\n", studis[i].name, studis[i].matrikel, studis[i].notenschnitt);
	}
}

float bester_schnitt(Studenten *studis, int anzahl) {
	float besterschnitt = 4.0;
	for (int i = 0; i < anzahl; i++) {
		if (studis[i].notenschnitt < besterschnitt) {
			besterschnitt = studis[i].notenschnitt;
		}
	}
	return besterschnitt;
}

int main() {

	Studenten studenten[STUDENTENZAHL] = {
		{"Johann Wolfgang Goethe", 1.3, 12345},
		{"Albert Einstein", 2.7, 23456},
		{"Niels Bohr", 1.0, 34567},
		{"Lex Luthor", 3.3, 98765},
		{"Lois Lane", 2.0, 87654}
	};
	ausgabe(studenten, STUDENTENZAHL);
	printf("Bester Schnitt: %1.1lf\n", bester_schnitt(studenten, STUDENTENZAHL));
	return 0;
}
