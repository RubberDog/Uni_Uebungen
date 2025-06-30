#include <iostream>

int Mittel(int* Pointer, int Anzahl, double &Mittelwert) {
    double Ergebnis = 0.0;
    for (int i = 0; i < Anzahl; i++) {
        Ergebnis += (*(Pointer + i));
    }
    Mittelwert = Ergebnis / Anzahl;
    if (Mittelwert == 0.0)
        return 0;
    else
        return -1;
}

int main() {
    double Mittelwert = 0.0;
    int Anzahl = 7;
    int Array[7] = {2, 5, 7, 546, 65, 23, 75};

    std::cout << "Der returnwert der Funktion ist: " << Mittel(Array, Anzahl, Mittelwert) << std::endl;
    std::cout << "Der Mittelwert beträgt: " << Mittelwert << std::endl;

}
