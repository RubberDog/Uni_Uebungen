#include <iostream>
#include <fstream>

int writeName(char* FileName, char* vorname, char* nachname) {
    std::ofstream file(FileName);
    if(!file.is_open()) {
        std::cout << "Kann Datei nicht oeffnen, hier is Ende! " << std::endl;
        return -1;
    }
    file << vorname << " " << nachname;
    file.close();
    return 0;
}

int main() {
    char vorname[20];
    char nachname[20];
    char FileName[] = "namen.txt";
    std::cout << "Ja moin Brudi. Wie heisstn? Vorname bitte zuerst: ";
    std::cin >> vorname;
    std::cout << "Check, " << vorname << "! Jetzt noch deinen Nachnamen bitte: ";
    std::cin >> nachname;
    writeName(FileName, vorname, nachname);
    std::cout << "Checko - hab dich eingetragen. DU STEHST JETZT AUF MEINER LISTE! MUAHAHAHAHA." << std::endl;
    return 0;
}
