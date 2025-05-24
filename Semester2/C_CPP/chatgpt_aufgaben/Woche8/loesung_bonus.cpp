/* 
Noch nicht fertig. Speichern in Datei kommt noch.. keine Lust mehr.
*/

#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

int menue();

void anlegen();

void speichern();

void einlesen();

void anzeigen();

struct Einkauf {
	std::string item;
	int anzahl;
};

std::vector<Einkauf> einkauf;

int main() {
	int selection = 0;
	do {
		selection = menue();
		switch (selection) {
		case 1:
			einlesen();
			break;
		case 2:
			anlegen();
			break;
		case 3:
			anzeigen();
			break;
		case 4:
			speichern();
			break;
		}
	} while (selection != 5);
	return 0;
}

int menue() {
	int selection;
	std::cout << "=====================" << std::endl;
	std::cout << "Was moechtest du tun? " << std::endl;
	std::cout << "=====================" << std::endl;
	std::cout << "1) Liste laden " << std::endl;
	std::cout << "2) Hinzufuegen" << std::endl;
	std::cout << "3) Liste anzeigen" << std::endl;
	std::cout << "4) Liste speichern" << std::endl;
	std::cout << "5) Beenden" << std::endl;
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
	std::ifstream listeDatei("einkauf.txt");
	if (!listeDatei) {
		std::cerr << "Es existiert keine Datei, die ich einlesen koennte :(" << std::endl;
		return;
	}
	std::string line;
	while (std::getline(listeDatei, line)) {
		std::istringstream iss(line);
		std::string item;
		int anzahl;
		iss >> item >> anzahl;
		Einkauf e{ item, anzahl };
		einkauf.push_back(e);
	}
}

void anlegen() {
	std::string item;
	int anzahl;
	std::cout << "Was soll deiner Liste hinzugefuegt werden? " << std::endl;
	std::cin >> item;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	std::cout << "Alles klar - und wie viele davon? " << std::endl;
	std::cin >> anzahl;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	int nummer = einkauf.size();
	Einkauf e{ item, anzahl };
	einkauf.push_back(e);
}

void anzeigen() {
	if (einkauf.size() > 0) {
		for (int i = 0; i < einkauf.size(); i++) {
			std::cout << i + 1 << ": " << einkauf[i].item << " "  << einkauf[i].anzahl << "\n" << std::endl;
		}
	}
	else {
		std::cout << "Deine Liste ist leer!\n" << std::endl;
	}
}

void speichern() {
	std::cout << "TDB" << std::endl;
}
