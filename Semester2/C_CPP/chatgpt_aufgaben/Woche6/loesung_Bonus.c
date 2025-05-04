/*
Funktioniert nur so halb.
scanf_s bei "lies_array()" bricht nach Eingabe der ersten Zahl ohne Fehlermeldung ab.
Vermutlich ein Speicherzugriffsfehler? 
Wenn ich den Fehler noch finde, korrigiere ich's hier.
Vielleicht klappt's sonst bei jemandem von euch (mit scanf statt scanf_s) */

#include <stdio.h>

int anzahl = 0;

int lies_zahl() {
	printf("Wie viele Zahlen sollen's werden?\n");
	scanf_s("%d", &anzahl);
	printf("Anmzahl %d", anzahl);
	return anzahl;
}

void lies_array(int* arr, int n) {
	printf("Welche Zahlen sollen hinzugefuegt werden?\n");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", (arr + i));
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
	printf("Max: %d", finde_max(arr, anzahl));
	printf("Min: %d", finde_min(arr, anzahl));
	printf("Durchschnitt: %lf", berechne_durchschnitt(arr, anzahl));
	printf("Anzahl negativer Zahlen: %d", zaehle_negative(arr, anzahl));
	printf("Anzahl gerader Zahlen: %d", zaehle_gerade(arr, anzahl));
	printf("Anzahl ungerader Zahlen: %d", zaehle_ungerade(arr, anzahl));
}
