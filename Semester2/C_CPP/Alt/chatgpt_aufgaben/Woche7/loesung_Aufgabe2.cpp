#include <iostream>
#include <string>

void ausgabe(int zahl) {
	std::cout << "Die Integer-Version: " << zahl << std::endl;
}
void ausgabe(double zahl) {
	std::cout << "Die double-Version: " << zahl << std::endl;
}
void ausgabe(std::string blubb) {
	std::cout << "Und jetzt, der String: " << blubb << std::endl;
}

int main() {
	int a = 42;
	double b = 43.1337;
	std::string c = "bla blubb kekse";

	ausgabe(a);
	ausgabe(b);
	ausgabe(c);

	return 0;
}
