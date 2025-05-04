#include <iostream>
#include <string>

int main() {
    std::string password = "geheim";
    std::string eingabe = "";
    for (int i = 1; i <= 3; i++) {
        std::cout << "Nenne mir bitte das Passwort: " << std::endl;
        std::cin >> eingabe;
        if (eingabe != password) {
            std::cout << "Leider falsch. Das war Versuch " << i << std::endl;
        } else {
            std::cout << "Zugang gewährt." << std::endl;
            return 0;
        }
    }
    std::cout << "Zugang verweigert." << std::endl;
}
