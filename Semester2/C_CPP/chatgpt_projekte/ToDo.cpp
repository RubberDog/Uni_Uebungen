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
	std::cout << "Hier kommt spaeter noch was" << std::endl;
}

void erledigen() {
	int aufgabennr = 0;
	std::cout << "Welche Aufgabe hast du erledigt? " << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	int i = 1;
	for (const auto& aufgabe : aufgaben) {
		std::cout << i << " " << aufgabe.beschreibung << "\n";
		i++;
	}
	std::cin >> aufgabennr;
	while (std::cin.fail() || aufgabennr <= 0 || aufgabennr > aufgaben.size()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Ungueltige Eingabe. Bitte eine gueltige Aufgabennummer eingeben: ";
		std::cin >> aufgabennr;
	}
	aufgaben[aufgabennr-1].erledigt = true;
}

void anzeigen() {
	for (const auto& aufgabe : aufgaben) {
		if (aufgabe.erledigt == true)
			std::cout << "[DONE] ";
			std::cout << aufgabe.beschreibung << "\n\n";
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
			erledigen();
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
