#include <stdio.h>
#include <stdlib.h>

int anzahl = 0;

int lies_zahl() {
	printf("Wie viele Zahlen sollen's werden?\n");
	scanf("%d", &anzahl);
	printf("Anmzahl %d", anzahl);
	return anzahl;
}

void lies_array(int* arr, int n) {
	printf("Welche Zahlen sollen hinzugefuegt werden?\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", (arr + i));
	}
}


int finde_max(const int* arr, int n) {
	const int* pointer = arr;
	const int* endegeleande = arr + n;
	int maxzahl = *pointer;
	for (; pointer < endegeleande; pointer++) {
		if (*pointer > maxzahl)
			maxzahl = *pointer;
	}
	return maxzahl;
}

int finde_min(const int* arr, int n) {
	const int* pointer = arr;
	const int* endegeleande = arr + n;
	int minzahl = *pointer;
	for (; pointer < endegeleande; pointer++) {
		if (*pointer < minzahl)
			minzahl = *pointer;
	}
	return minzahl;
}

float berechne_durchschnitt(const int* arr, int n) {
	const int* pointer = arr;
	const int* endegeleande = arr + n;
	float durchschnitt = 0.0;
	int summe = 0;
	for (; pointer < endegeleande; pointer++) {
		summe += *pointer;
	}
	durchschnitt = (float) summe / n;
	return durchschnitt;
}

int zaehle_negative(const int* arr, int n) {
	const int* pointer = arr;
	const int* endegeleande = arr + n;
	int negative = 0;
	for (; pointer < endegeleande; pointer++) {
		if (*pointer < 0)
			negative + 1;
	}
	return negative;
}

int zaehle_gerade(const int* arr, int n) {
	const int* pointer = arr;
	const int* endegeleande = arr + n;
	int gerade = 0;
	for (; pointer < endegeleande; pointer++) {
		if (*pointer % 2 == 0)
			gerade += 1;
	}
	return gerade;
}

int zaehle_ungerade(const int* arr, int n) {
	const int* pointer = arr;
	const int* endegeleande = arr + n;
	int ungerade = 0;
	for (; pointer < endegeleande; pointer++) {
		if (*pointer % 2 != 0)
			ungerade += 1;
	}
	return ungerade;
}

int main() {
	int* arr = (int*)malloc(lies_zahl() * sizeof(int));
	lies_array(arr, anzahl);
	printf("Max: %d\n", finde_max(arr, anzahl));
	printf("Min: %d\n", finde_min(arr, anzahl));
	printf("Durchschnitt: %10.2lf\n", berechne_durchschnitt(arr, anzahl));
	printf("Anzahl negativer Zahlen: %d\n", zaehle_negative(arr, anzahl));
	printf("Anzahl gerader Zahlen: %d\n", zaehle_gerade(arr, anzahl));
	printf("Anzahl ungerader Zahlen: %d\n", zaehle_ungerade(arr, anzahl));
}
