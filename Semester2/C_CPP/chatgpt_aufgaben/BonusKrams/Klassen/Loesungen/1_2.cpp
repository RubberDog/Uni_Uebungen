#include <iostream>
#include <string>

class Person {
private:
	std::string name;

public: 
	Person(const std::string & name) : name(name){}

	void begruesse() {
		std::cout << "\nHallo, " << name << "!" << std::endl;
	}

};

int main() {
	Person person("Matti");
	person.begruesse();
	return 0;
}
