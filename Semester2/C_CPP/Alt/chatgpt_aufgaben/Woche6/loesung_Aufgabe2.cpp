#include <iostream>

int main() {
	int zahl, summe = 0;
	std::cout << "Alles klar, bis zu welcher Zahl soll ich fuer dich addieren (ohne multiple von 3)? " << std::endl;
	std::cin >> zahl;
	if (std::cin.fail()) {
		std::cout << "Sorry, das ist keine Zahl. Better luck next time." << std::endl;
		return 1;
	}
	for (int i = 1; i <= zahl; i++) {
		if (i % 3 == 0) {
			continue;
		} else {
			summe += i;
		}
	}
	std::cout << "Feddisch - die Summe aller Zahlen von 1 bis " << zahl << " - wobei multiple von 3 ignoriert werden - ist " << summe << std::endl;
	return 0;
}
