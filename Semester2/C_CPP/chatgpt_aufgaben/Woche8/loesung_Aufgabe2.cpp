#include <iostream>
/*
Implementiert eine Funktion, die ein dynamisches Array erstellt, Werte einliest, 
das Array mittels Bubblesort(https://de.wikipedia.org/wiki/Bubblesort#Algorithmus ) sortiert und dann zurückgibt.

Verwendet dafür Zeiger als Funktionsparameter und achtet auf korrektes Speichermanagement(malloc / free in C, new / delete in C++).
*/

/* Der Code ist Dokumentation genug!
  Gut, ich hab's nächste Woche eh wieder vergessen.
  "bool zutun" wird hier am Anfang der do-while auf false gesetzt, und wenn ein wert getauscht wird auf true.
  Ist er am Ende noch auf false, so wurde nichts getauscht - die Sortierung ist fertig.
  Andernfalls wird das gesamte array immer wieder durchlaufen, bis eben das der Fall ist.

  Alternativ natürlich auch mit einer inneren- und einer äußeren Schleife möglich wie im ersten Pseudocode auf wikipedia.
*/

void sortieren(int* arr, int size) {
	bool zutun;
	do {
		zutun = false;
		for (int i = 0; i < size - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
				zutun = true;
			}
		}
	} while (zutun);
}

int* createArray(int *arraySize) {
	std::cout << "Wie viele Elemente sollen es werden? ";
	std::cin >> *arraySize;

	int* array = new int[*arraySize];

	std::cout << "Alles klar. Bitte " << *arraySize << " Integer angeben;\n";
	for (int i = 0; i < *arraySize; i++) {
		std::cin >> array[i];
	}
	sortieren(array, *arraySize);
	return array;
}

int main() {
	int size = 0;
	int* array = createArray(&size);

	std::cout << "Fertig! Hier das Ergebnis;\n";
	for (int i = 0; i < size; i++) {
		std::cout << array[i] << " ";
	}
	std::cout << std::endl;

	delete[] array;

	return 0;
}
