#include <iostream>

int anzahlGerade(int* pointer, int Anzahl){
    int zahl = 0;
    for(int i = 0; i < Anzahl; i++){
        if (*(pointer + i) %2 == 0){
            zahl++;
        }
    }
    return zahl;
}


int main() {
    int myArray[] = {3,523456,74,35,235,6,672,54,6,742,53,7,84,623,42,4,6,623156};
    int anzahl = 18;
    std::cout << "Im aktuellen Array befinden sich " << anzahlGerade(myArray, anzahl) << " gerade Zahlen.\n";
    return 0;
}
