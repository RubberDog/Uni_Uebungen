#include <iostream>
#include <fstream>

int main() {
	std::ifstream infile("zahl.txt");
	int zahl;
	if (!infile) {
		std::cout << "Sorry, keine zahl.txt vorhanden!" << std::endl;
	}
	else {
		infile >> zahl;
		std::cout << "Beim letzten mal war deine Zahl die " << zahl << "." << std::endl;
	}
	infile.close();
	std::cout << "Welche Zahl soll ich mir merken? " << std::endl;
	std::cin >> zahl;
	std::ofstream outfile("zahl.txt");
	if (!outfile) {
		std::cout << "Datei konnte nicht geöffnet werden!" << std::endl;
		return 1;
	}
	outfile << zahl;
	outfile.close();
	return 0;
}
