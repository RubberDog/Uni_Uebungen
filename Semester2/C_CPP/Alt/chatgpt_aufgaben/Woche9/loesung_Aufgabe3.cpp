#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

int menue();

void einlesen();

void anzeigen();

struct Messwert {
	std::string ort;
	float wert;
};

std::vector<Messwert> messwerte;

int main() {
	int selection = 0;
	do {
		selection = menue();
		switch (selection) {
		case 1:
			einlesen();
			break;
		case 2:
			anzeigen();
			break;
		}
	} while (selection != 3);
	return 0;
}

int menue() {
	int selection;
	std::cout << "=====================" << std::endl;
	std::cout << "Was moechtest du tun? " << std::endl;
	std::cout << "=====================" << std::endl;
	std::cout << "1) Liste laden " << std::endl;
	std::cout << "2) Liste anzeigen" << std::endl;
	std::cout << "3) Beenden" << std::endl;
	std::cout << "=====================" << std::endl;
	std::cin >> selection;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		selection = 0;
	}
	return selection;
};

void einlesen() {
	std::ifstream listeDatei("messwerte.txt");
	if (!listeDatei) {
		std::cerr << "Es existiert keine Datei, die ich einlesen koennte :(" << std::endl;
		return;
	}
	std::string line;
	while (std::getline(listeDatei, line)) {
		std::istringstream iss(line);
		std::string ort;
		float wert;
		iss >> ort >> wert;
		Messwert e{ ort, wert };
		messwerte.push_back(e);
	}
	listeDatei.close();
}

void anzeigen() {
	if (messwerte.size() > 0) {
		for (int i = 0; i < messwerte.size(); i++) {
			std::cout << i + 1 << ": " << messwerte[i].ort << " " << messwerte[i].wert << "\n" << std::endl;
		}
	}
	else {
		std::cout << "Deine Liste ist leer!\n" << std::endl;
	}
}
