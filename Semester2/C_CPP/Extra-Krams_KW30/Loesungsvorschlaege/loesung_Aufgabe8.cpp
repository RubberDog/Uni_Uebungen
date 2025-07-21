#include <iostream>
#include <fstream>
#include <string>

int sumCSV(char* FileName, int& Summe) {
    int summe = 0;
    std::string linebuffer;
    std::ifstream file(FileName);
    if(!file.is_open()) {
        std::cout << "Kann Datei nicht öffnen. Breche ab!" << std::endl;
        return -1;
    }
    while(getline(file, linebuffer, ',')) {
        summe += stoi(linebuffer);
    }
    Summe = summe;
    file.close();
    return 0;
}

int main() {
    char FileName[] = "daten.csv";
    int Summe;
    sumCSV(FileName, Summe);
    std::cout << "Die gesamtsumme beträgt: " << Summe << std::endl;
    return 0;
}
