#include <stdio.h>
#include <stdlib.h>

int main() {
	int anzahl;

	printf("Wie viele Zahlen sollen's sein? ");
	if (scanf_s("%d", &anzahl) != 1) {
		printf("Ungueltige Eingabe. Bye!");
		return 1;
	}

	int* zahlenreihe = (int*)malloc(anzahl * sizeof(int));
	if (zahlenreihe == 0) {
		printf("Uh-Oh. Speicher konnte nicht reserviert werden. Download more RAM? ");
		return 1;
	}

	printf("Welche Zahlen sollen dem Array hinzugefuegt werden?");
	for (int i = 0; i < anzahl; i++) {
		if (scanf_s("%d", zahlenreihe + i) != 1) {
			printf("Ungueltige Eingabe! Bye!");
			free(zahlenreihe);
			return 1;
		}
	}

	int* pointer = zahlenreihe;
	int* limit = zahlenreihe + anzahl;
	int maxzahl = *pointer;

	for (; pointer < limit; pointer++) {
		if (*pointer > maxzahl) {
			maxzahl = *pointer;
		}
	}
	printf("Die groesste Zahl in deinem Array ist die %d", maxzahl);
	free(zahlenreihe);
	return 0;
}
