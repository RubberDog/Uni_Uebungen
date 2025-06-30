#include <iostream>

int search(int * pointer, int Anzahl, int Wert) {
    int Ergebnis = -1;
    for (int i = 0; i < Anzahl; i++) {
        if (*(pointer+i) == Wert) {
            Ergebnis = Wert;
            break;
        }
    }
    return Ergebnis;
}

int main() {
    int Wert = 7;
    int Anzahl = 5;
    int Array[5] = {5, 6, 7, 8, 9};
    std::cout << search(Array, Anzahl, Wert) << std::endl;
}
