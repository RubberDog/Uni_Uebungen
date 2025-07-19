/*
a) Schreiben Sie eine Funktion zum Speichern von Werten aus einem integer Array in die Datei mw.txt. Die integer Werte sollen in der Datei zeilenweise gespeichert, d.h. ein Wert pro Zeile.

Die erste Zeile in der Datei soll lauten: MESSWERTABELLE_01:

Der Prototyp der Funktion sieht wie folgt aus:

int save(char* FileName, int Anzahl, int* Values);
b) Binden Sie die Funktion save in ein übergeordnetes Modul (main()) ein.

Rufen Sie die Funktion mit dem gegebenen Array int field01[100] auf.

Hinweis: Programmieren in ANSI-C oder C++ bleibt Ihnen überlassen.
 */

#include <iostream>
#include <fstream>

int save(char* FileName, int Anzahl, int* Values){
    std::ofstream file(FileName);
    if (!file.is_open()) {
        std::cout << "Konnte die Datei nicht oeffnen!" << std::endl;
        return -1;
    }
    file << "MESSWERTTABELLE_01\n";
    for(int i = 0; i < Anzahl; i++) {
        file << Values[i] << "\n";
    }
    file.close();
    return 0;
}

int main() {
    char FileName[] = "mw.dat";
    int Anzahl = 100;
    // die folgenden hundert werte habe ich mir einfach generieren lassen und reinkopiert - testen muss ich's, hab aber
    // nicht genug langeweile das manuell zu machen!
    int field01[100] = {
            1012, 1013, 1014, 1011, 1010, 1009, 1008, 1007, 1006, 1005,
            1004, 1003, 1002, 1001, 1000, 999, 998, 997, 996, 995,
            994, 993, 992, 991, 990, 989, 988, 987, 986, 985,
            984, 983, 982, 981, 980, 979, 978, 977, 976, 975,
            974, 973, 972, 971, 970, 969, 968, 967, 966, 965,
            964, 963, 962, 961, 960, 959, 958, 957, 956, 955,
            954, 953, 952, 951, 950, 949, 948, 947, 946, 945,
            944, 943, 942, 941, 940, 939, 938, 937, 936, 935,
            934, 933, 932, 931, 930, 929, 928, 927, 926, 925,
            924, 923, 922, 921, 920, 919, 918, 917, 916, 915
    };
    save(FileName, Anzahl, field01);
}
