#include <iostream>
#include <fstream>

int countLines(char* FileName) {
    int lines = 0;
    std::string waste;
    std::ifstream file(FileName);
    while (!file.eof()) {
        getline(file, waste);
        lines++;
    }
    return lines;
}

int main() {
    char filename[] = "Ausgabe.txt";
    int lines = countLines(filename);
    std::cout << "Anzahl lines: " << lines << std::endl;
};
