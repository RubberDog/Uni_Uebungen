#include <iostream>
#include <cctype>

int toUpper(char* zeichenkette) {
    int counter = 0;
    for (int i = 0; zeichenkette[i] != '\0'; i++) {
        if (std::islower(zeichenkette[i])) {
            zeichenkette[i] = std::toupper(zeichenkette[i]);
            counter++;
        }
    }
    return counter;
}

int main() {
    int zaehler = 0;
    char teststring[] = "EinTollerTestString";
    zaehler = toUpper(teststring);
    std::cout << "Es wurden " << zaehler << " Buchstaben geaendert.\n";
}
