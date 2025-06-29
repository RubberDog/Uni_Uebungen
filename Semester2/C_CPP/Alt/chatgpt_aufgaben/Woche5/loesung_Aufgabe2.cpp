#include <iostream>


int main() {
    int eingabe, summe = 0;

    std::cout << "Bis zu welcher Zahl moechtest du die geraden Zahlen addieren? \n" << std::endl;
    std::cin >> eingabe;
    for (int i = 1; i <= eingabe; i++) {
        if (i % 2 == 0) {
            summe += i;
        }

    }
    std::cout << "Die Summe der Zahlen betraegt: " << summe << std::endl;
}
