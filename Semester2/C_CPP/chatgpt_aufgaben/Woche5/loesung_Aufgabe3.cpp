#include <iostream>

int main() {
	int anzahl;
	std::cout << "Wie viele Zahlen sollen's denn werden?" << std::endl;
	std::cin >> anzahl;
	if (std::cin.fail() || anzahl < 1) {
		std::cout << "Ungueltige Eingabe. Bye!" << std::endl;
		return 1;
	}
	int* zahlenreihe = new int[anzahl];
	std::cout << "Bitte die Zahlen eingeben:" << std::endl;
	for (int i = 0; i < anzahl; i++) {
		if (!std::cin.fail()) {
			std::cin >> *(zahlenreihe + i);
		} else {
			std::cout << "Ungueltige Eingabe. Bye!" << std::endl;
			return 1;
		}
	}
	int* pointer = zahlenreihe;
	int* endegeleande = zahlenreihe + anzahl;
	int maxzahl = *pointer;

	for (; pointer < endegeleande; pointer++) {
		if (*pointer > maxzahl) {
			maxzahl = *pointer;
		}
	}
	std::cout << "Die groesste Zahl ist: " << maxzahl << std::endl;
	return 0;
}
