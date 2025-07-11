/*
a) Schreiben Sie eine Funktion zum Auslesen von Werten aus einer Datei mit dem Namen mw.dat. Die integer Werte in der Datei sind zeilenweise gespeichert, d.h. ein Wert pro Zeile. (Hinweis: Selbst erstellen)

Der Prototyp der Funktion sieht wie folgt aus:

int Read(char* FileName, int Anzahl, int* Values);
b) Binden Sie die Funktion Read in ein übergeordnetes Modul (main()) ein. Legen Sie sich dynamischen Speicher für 100 Werte an und rufen Sie die Funktion Read mit Filename und Anzahl der zu lesenden Werte und dem Ergebnisspeicher auf.
 */

#include <iostream>
#include <fstream>

int Read(char* FileName, int Anzahl, int* Values) {
    std::ifstream file(FileName);
    std::cout << "[Studi-Debug] File: " << FileName << std::endl;
    if (!file.is_open()) {
        std::cout << "Die Datei konnte nicht geöffnet werden!\n";
        return -1;
    }
    /*
        Das hier ist unnötiger Bonus. Nur zum Abfangen von Fehlern, sollten unerwarteter Weise weniger als 100 (korrekte) Einträge in der Datei sein
    */
    int count = 0;
    while (count < Anzahl && file >> Values[count]) {
        ++count;
    }
    /* 
        Hier die simplere Version, davon ausgehend dass genau $ANZAHL Einträge in $FILENAME sind
    */
    /*
    for (int i = 0; i < Anzahl; ++i) {
        file >> Values[i];
    }
    */
    file.close();
    // folgende Zeile nur in der "komplexen" Version
    return count;
    // simpel dann bitte so;
    // return 0;
}

int main() {
    int Anzahl = 100;
    int* Values = new int[Anzahl];
    if (Values == nullptr) {
        std::cout << "Die Speicherreservierung ist fehlgeschlagen!\n";
        return -1;
    }
    char FileName[] = "mw.dat";
    int readvalues = Read(FileName, Anzahl, Values);
    // Nur für die komplexe Version
    std::cout << "[Studi-Debug] Es wurden " << readvalues << " Werte verarbeitet!" << std::endl;
    std::cout << "[Noch viel mehr Studi-Debug]" << std::endl;
    for (int i = 0; i < readvalues; ++i) {
        std::cout << "Wert " << i + 1 << ": " << Values[i] << std::endl;
    }
    // In der simplen;
    std::cout << "Alles klar, alle Daten aus der Datei: " << FileName << " wurden in ein Array geschrieben!" << std::endl;
    // Speicher wieder freimachen nicht vergessen!
    delete Values;
    return 0;
}
