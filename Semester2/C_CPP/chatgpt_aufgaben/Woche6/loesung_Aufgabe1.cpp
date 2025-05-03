#include <iostream>

int ist_gerade(int zahl) {
	if (zahl % 2 == 0)
		return 1;
	else
		return 0;
}

int main() {
	int zahl;
	std::cout << "Alles klar, welche Zahl soll ich fuer dich ueberpruefen? " << std::endl;
	std::cin >> zahl;
	if (std::cin.fail()) {
		std::cout << "Sorry, das ist keine Zahl. Better luck next time.";
		return 1;
	}
	if (ist_gerade(zahl) == 1) {
		std::cout << "Jup, " << zahl << " ist gerade." << std::endl;
	}
	else {
		std::cout << "Sorry, " << zahl << " ist ungerade." << std::endl;
	}
	return 0;
}
