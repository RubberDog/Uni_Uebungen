#include <iostream>

long long fakultaet(int zahl) {
    long long summe = 1;
    if (zahl < 0)
        return 0;
    else if (zahl == 0)
        return 1;
    for (; zahl > 0; zahl--) {
        summe *= zahl;
    }
    return summe;
}

int main() {
    int zahl = 5;
    long long summe = fakultaet(zahl);
    std::cout << "Alles klar! Die Fakultaet von " << zahl << " ist: " << summe << std::endl;
    zahl = -5;
    summe = fakultaet(zahl);
    std::cout << "Alles klar! Die Fakultaet von " << zahl << " ist: " << summe << std::endl;
}
