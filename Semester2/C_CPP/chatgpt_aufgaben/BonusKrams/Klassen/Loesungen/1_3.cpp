#include <iostream>
#include <string>

class Auto {
public:
	std::string marke;
	std::string baujahr;

	void zeigeInfo() {
		std::cout << "Dieses Auto hat die Marke " << marke << " und stammt aus dem Baujahr " << baujahr << std::endl;
	}
};

int main() {
	Auto auto1;
	Auto auto2;
	auto1.marke = "Mercedes";
	auto1.baujahr = "2025";
	auto2.marke = "Ford";
	auto2.baujahr = "1968";
	auto1.zeigeInfo();
	auto2.zeigeInfo();
	return 0;
}
