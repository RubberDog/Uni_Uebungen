#include <iostream>
#include <fstream>

int main() {
	std::ofstream outfile("ausgabe.txt");
	if (!outfile) {
		std::cout << "Datei konnte nicht geöffnet werden!" << std::endl;
		return 1;
	}
	outfile << "Hallo Welt!" << std::endl;
	return 0;
}
