#include <iostream>
#include <fstream>

int replaceAndPrint(char* FileName) {
    int lines = 0;
    std::string zeile;
    std::ifstream file(FileName);
    while (!file.eof()) {
        getline(file, zeile);
        for (int i = 0; i < zeile.length(); i++) {
            if (zeile[i] == ' ') {
                zeile[i] = '_';
            }
        }
        std::cout << zeile << std::endl;
    }
    file.close();
    return lines;
}

int main() {
    char filename[] = "Ausgabe.txt";
    replaceAndPrint(filename);
};
