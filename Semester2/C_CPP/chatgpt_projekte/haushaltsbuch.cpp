#include <iostream>
#include <vector>
#include <sstream>

struct Buchung {
	std::string beschreibung;
	double betrag;
};

std::vector<Buchung> buchungen;

void einnahme() {
	std::string grund;
	double summe;
	std::cout << "Was ist der Grund der Buchung?" << std::endl;
	std::getline(std::cin, grund);
	std::cout << "Welche Summe soll gebucht werden?" << std::endl;
	std::cin >> summe;
	if (summe < 0) {
		std::cout << ("Negative Werte koennen keine Einnahme sein!\n\n") << std::endl;
		return;
	}
	Buchung b = { grund, summe };
	buchungen.push_back(b);
}

void ausgabe() {
	std::string grund;
	double summe;
	std::cout << "Was ist der Grund der Buchung?" << std::endl;
	std::cin >> grund;
	std::cout << "Welche Summe soll gebucht werden?" << std::endl;
	std::cin >> summe;
	if (summe > 0) {
		std::cout << ("Positive Werte koennen keine Ausgabe sein!\n\n") << std::endl;
		return;
	}
	Buchung b = { grund, summe };
	buchungen.push_back(b);
}

void buchungenzeigen() {
	for (const auto& buchung : buchungen) {
		std::cout << buchung.beschreibung << ": " << buchung.betrag << " EUR\n\n";
	}
}

void kontostandanzeigen() {
	double kontostand = 0;
	for (const auto& buchung : buchungen) {
			kontostand += buchung.betrag;
	}
	std::cout << "Der aktuelle Kontostand betraegt: " << kontostand << " EUR.\n\n" << std::endl;
}


int main() {
	int selection;
	do {
		std::cout << "Was moechtest du tun? " << std::endl;
		std::cout << "\n1. Einnahme hinzufuegen\n2. Ausgabe hinzufuegen\n3. Alle Buchungen anzeigen\n4. Kontostand anzeigen\n5. Beenden\n" << std::endl;
		std::cin >> selection;
		if (std::cin.fail()) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			selection = 0;
		}

		switch (selection)
		{
			case 1:
				einnahme();
				break;
			case 2:
				ausgabe();
				break;
			case 3:
				buchungenzeigen();
				break;
			case 4:
				kontostandanzeigen();
				break;
		}
		
	} while (selection != 5);
}
