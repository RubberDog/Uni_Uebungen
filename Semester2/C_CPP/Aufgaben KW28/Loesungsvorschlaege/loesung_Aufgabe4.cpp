/*
a) Schreiben Sie eine Funktion zum Speichern von drei Textzeilen in die Datei Ausgabe.txt.
 Die Textzeilen sollen in der Datei zeilenweise gespeichert werden.
Der Prototyp der Funktion sieht wie folgt aus:

int store(char* FileName, char* Z1, char* Z2, char* Z3);

b) Binden Sie die Funktion store in ein übergeordnetes Modul (main()) ein. Rufen Sie die Funktion mit folgenden
 Textzeilen auf:
 MESSWERTDATEI_0001
 MESSUNG
 DRUCK
 EINHEIT hPa

 Hinweis: Programmieren in ANSI-C oder C++ bleibt Ihnen überlassen.
 */

#include <iostream>
#include <fstream>

int store(char* FileName, char* Z1, char* Z2, char* Z3){
    std::ofstream file(FileName);
    if (!file.is_open()) {
        std::cout << "Datei konnte nicht geoeffnet werden!" << std::endl;
        return 1;
    }
    file << Z1 << "\n" << Z2 << "\n" << Z3 << "\n";
    file.close();
    return 0;
}

int main() {
    char FileName[] = "Ausgabe.txt";
    // Aufgabenstellung kacke. Wie soll's auf drei Zeilen aufgeteilt werden? Ist "MESSWERTDATEI_0001" der Dateiname?!
    // Oder nur das erste Feld? Unklarer mist!
    char Z1[] = "MESSWERTDATEI_0001";
    char Z2[] = "MESSUNG";
    char Z3[] = "DRUCK EINHEIT hPa";
    store(FileName, Z1, Z2, Z3);
}
