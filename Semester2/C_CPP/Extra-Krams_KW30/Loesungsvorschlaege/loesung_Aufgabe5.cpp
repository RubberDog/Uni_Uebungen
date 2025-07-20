#include <iostream>

int loescheZeichen(char* zeichenkette, char zuLoeschen) {
    int geloescht = 0;
    int i = 0, j = 0;

    while (zeichenkette[i] != '\0') {
        if (zeichenkette[i] != zuLoeschen) {
            zeichenkette[j++] = zeichenkette[i];
        } else {
            geloescht++;
        }
        i++;
    }
    zeichenkette[j] = '\0';
    return geloescht;
}

int main() {
    char myArray[] = "herpyderpy";
    char delChar = 'y';
    int Anzahl = loescheZeichen(myArray, delChar);
    std::cout << "Habe " << Anzahl << " mal das Zeichen " << delChar << " geloescht.";
    std::cout << "Es bleibt: " << myArray;
};
