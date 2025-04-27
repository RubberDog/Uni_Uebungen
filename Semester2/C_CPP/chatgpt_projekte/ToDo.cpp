#include <iostream>
#include <vector>
#include <sstream>

struct Aufgabe {
	std::string beschreibung;
	bool erledigt;
};

std::vector<Aufgabe> aufgaben;

int menue() {
	int selection;
	std::cout << "=======================" << std::endl;
	std::cout << " Was moechtest du tun? " << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "1. Neue Aufgabe anlegen" << std::endl;
	std::cout << "2. Aufgabe erledigen   " << std::endl;
	std::cout << "3. Aufgaben anzeigen   " << std::endl;
	std::cout << "4. Aufgabe loeschen    " << std::endl;
	std::cout << "5. Beenden             " << std::endl;
	std::cout << "=======================" << std::endl;
	std::cout << "Was moechtest du tun?\n" << std::endl;
	std::cin >> selection;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		selection = 0;
	}
	return selection;
}

void anlegen() {
	std::string aufgabentext;
	bool erledigt = false;
	std::cout << "Was soll ich notieren?" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, aufgabentext);
	Aufgabe b{ aufgabentext, erledigt };
	aufgaben.push_back(b);
}

void loeschen() {
	int aufgabennr = 0;
	std::cout << "Welche Aufgabe soll geloescht werden? " << std::endl;
	int i = 1;
	//for (const auto& aufgabe : aufgaben) {
	for (int i = 0; i < aufgaben.size(); i++) {
		std::cout << i << " " << aufgaben[i].beschreibung << "\n";
		i++;
	}
	std::cin >> aufgabennr;
	while (std::cin.fail() || aufgabennr <= 0 || aufgabennr > aufgaben.size()) {
		std::cin.clear();
		std::cout << "Ungueltige Eingabe. Bitte eine gueltige Aufgabennummer eingeben: ";
		std::cin >> aufgabennr;
	}
	aufgaben.erase(aufgaben.begin() + aufgabennr-1);
}

void erledigen(std::vector<Aufgabe>& aufgaben) {
	int aufgabennr = 0;
	std::cout << "Welche Aufgabe hast du erledigt? " << std::endl;
	for (int i = 0; i < aufgaben.size(); i++) {
		std::cout << i+1 << " " << aufgaben[i].beschreibung << "\n";
	}
	std::cin >> aufgabennr;
	while (std::cin.fail() || aufgabennr <= 0 || aufgabennr > aufgaben.size()) {
		std::cin.clear();
		std::cout << "Ungueltige Eingabe. Bitte eine gueltige Aufgabennummer eingeben: ";
		std::cin >> aufgabennr;
	}
	aufgaben[aufgabennr-1].erledigt = true;
}

void anzeigen() {
	for (int i = 0; i < aufgaben.size(); i++) {
		if (aufgaben[i].erledigt == true) {
			std::cout << "[DONE] ";
		}
		std::cout << aufgaben[i].beschreibung << "\n\n";
	}

}


int main() {
	int selection;
	do {
		selection = menue();

		switch (selection)
		{
		case 1:
			anlegen();
			break;
		case 2:
			erledigen(aufgaben);
			break;
		case 3:
			anzeigen();
			break;
		case 4:
			loeschen();
			break;
		}

	} while (selection != 5);
}
