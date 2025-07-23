#include <iostream>
#include <fstream>
#include <string>

int copyFile(char* Quelle, char* Ziel) {
    std::string line;
    std::ifstream file1(Quelle);
    if (!file1.is_open()) {
        std::cout << "Kacki. Quelldatei kann nicht geoeffnet werden." << std::endl;
        return 0;
    }
    std::ofstream file2(Ziel);
    if (!file2.is_open()) {
        std::cout << "Kacki. Zieldatei kann nicht geoeffnet werden." << std::endl;
        return 0;
    }
    while (!file1.eof()) {
        getline(file1, line);
        file2 << line;
        file2 << '\n';
    }
    return 1;
}

int main() {
    char file1[] = "quelldatei.txt";
    char file2[] = "zieldatei.txt";
    copyFile(file1, file2);
}
