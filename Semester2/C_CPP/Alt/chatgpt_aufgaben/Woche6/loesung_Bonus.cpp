#include <iostream>

int anzahl = 0;

int lies_zahl() {
	std::cout << "Wie viele Zahlen sollen's werden? " << std::endl;
	std::cin >> anzahl;
	return anzahl;
}

void lies_array(int* arr, int n) {
	std::cout << "Welche Zahlen sollen hinzugefuegt werden? " << std::endl;
	for ( int i = 0; i < n; i++) {
		std::cin >> *(arr + i);
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
	durchschnitt = summe / n;
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
	int* arr = new int[lies_zahl()];
	lies_array(arr, anzahl);
	std::cout << "Max: " << finde_max(arr, anzahl) << std::endl;
	std::cout << "Min: " << finde_min(arr, anzahl) << std::endl;
	std::cout << "Durchschnitt: " << berechne_durchschnitt(arr, anzahl) << std::endl;
	std::cout << "Anzahl negativer Zahlen: " << zaehle_negative(arr, anzahl) << std::endl;
	std::cout << "Anzahl gerader Zahlen: " << zaehle_gerade(arr, anzahl) << std::endl;
	std::cout << "Anzahl ungerader Zahlen: " << zaehle_ungerade(arr, anzahl) << std::endl;
}
