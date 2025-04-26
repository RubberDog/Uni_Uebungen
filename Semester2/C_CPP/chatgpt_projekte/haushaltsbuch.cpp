#include <iostream>
#include <vector>
#include <sstream>
#include <iomanip>

struct Buchung {
	std::string beschreibung;
	double betrag;
};

std::vector<Buchung> buchungen;


int menueanzeigen() {
	int selection;
	std::cout << "\n======================" << std::endl;
	std::cout << "     Haushaltsbuch" << std::endl;
	std::cout << "======================\n" << std::endl;
	std::cout << "1. Einnahme hinzufuegen" << std::endl;
	std::cout << "2. Ausgabe hinzufuegen" << std::endl;
	std::cout << "3. Alle Buchungen anzeigen" << std::endl;
	std::cout << "4. Kontostand anzeigen" << std::endl;
	std::cout << "5. Beenden\n" << std::endl;
	std::cout << "Bitte eine Auswahl treffen (1-5): \n";
	std::cin >> selection;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		selection = 0;
	}
	return selection;
}

void einnahme() {
	std::string grund;
	double summe;
	std::cout << "\nWas ist der Grund der Buchung?" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, grund);
	std::cout << "\nWelche Summe soll gebucht werden?" << std::endl;
	std::cin >> summe;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	Buchung b = { grund, summe };
	buchungen.push_back(b);
}

void ausgabe() {
	std::string grund;
	double summe;
	std::cout << "\nWas ist der Grund der Ausgabe?" << std::endl;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, grund);
	std::cout << "\nWelche Summe soll gebucht werden?" << std::endl;
	std::cin >> summe;
	if (std::cin.fail()) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	}
	if (summe > 0)
		summe = -summe;
	Buchung b = { grund, summe };
	buchungen.push_back(b);
}

void buchungenzeigen() {
	std::cout << "\n" << std::endl;
	for (const auto& buchung : buchungen) {
		if (buchung.betrag >= 0)
			std::cout << "[Einnahme] ";
		else
			std::cout << "[Ausgabe] ";
		std::cout << buchung.beschreibung << ": " << buchung.betrag << " EUR\n\n";
	}
}

void kontostandanzeigen() {
	double kontostand = 0;
	for (const auto& buchung : buchungen) {
			kontostand += buchung.betrag;
	}
	std::cout << "\n\nDer aktuelle Kontostand betraegt: " << kontostand << " EUR.\n\n" << std::endl;
}


int main() {
	std::cout << std::fixed << std::setprecision(2);
	int selection;
	do {
		selection = menueanzeigen();

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
