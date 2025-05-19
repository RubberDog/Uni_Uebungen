#include <iostream>
#include <string>

class Person {
public:
	std::string name;
};

void begruesse(Person);

int main() {
	Person person;
	std::cout << "Wie ist dein Name? ";
	std::cin >> person.name;
	begruesse(person);
	return 0;
}

void begruesse(Person person) {
	std::cout << "\nHallo, " << person.name << std::endl;
}
