/*
a) In einer Textdatei Datei Messwerte.dat sind neben Messwerten ein Dateikopf gespeichert:

MESSWERTDATEI_0001
MESSUNG_DRUCK
EINHEIT_hPa
1012

In der vierten Zeile steht die Anzahl der folgenden Messwerte.
Schreiben Sie eine Funktion, die die Anzahl der Messwerte ausliest und diese über den Rückgabewert zurückgibt.
Der Prototyp der Funktion sieht wie folgt aus:
int DummyRead(char* FileName);

b) Binden Sie die Funktion DummyRead in ein übergeordnetes Modul (main()) ein. Rufen Sie die Funktion mit der Datei Messwerte.dat auf und erzeugen Sie sich dynamischen Speicher für die gelesene Anzahl von Messwerten, die im integer Format vorliegen sollen. Prüfen Sie, ob Speicherplatz reserviert werden kann und löschen Sie den dynamischen Speicher wieder.
Hinweis: Programmieren in ANSI-C oder C++ bleibt Ihnen überlassen. */

#include <iostream>
#include <fstream>
#include <string>

int DummyRead(char* FileName) {
    std::ifstream file(FileName);
    if (!file.is_open()) {
        std::cout << "Die Datei konnte nicht geöffnet werden!" << std::endl;
        return -1;
    }
    std::string line;
    /* Das folgende klappt nur, weil wir WISSEN dass die Zahl in Zeile 4 steht.
     * Der Inhalt jeder Zeile wird in std::string line gespeichert. Jeder durchgang überschreibt den vorherigen.
     * Weil feststeht, dass die Zahl in Zeile 4 steht kann bei i < 4 (also i = 3, somit vierte Zeile) aufgehört werden
     */
    for(int i = 0; i < 4; i++) 
    {
        std::getline(file, line);
    }
    file.close();
    return stoi(line); // stoi -> ">s<tring >to< >i<nteger"
}

int main() {
    char FileName[] = "messwerte.dat";
    int AnzahlWerte = DummyRead(FileName);
    int *messw = new int[AnzahlWerte];
    if (messw == nullptr ) {
        std::cout << "Speicher konnte nicht reserviert werden!\n";
    }
    delete[] messw;
    std::cout << "In der Datei " << FileName << " befinden sich " << AnzahlWerte << " Messwerte. Viel Spass." << std::endl;
}
