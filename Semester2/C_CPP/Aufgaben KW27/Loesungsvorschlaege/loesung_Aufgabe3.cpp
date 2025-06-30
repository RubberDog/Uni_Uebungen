#include <iostream>

int change(char* Zeichenkette, char search, char replace) {
    int counter = 0;
    for (int i = 0; i < sizeof(Zeichenkette); i++) {
        if (*(Zeichenkette + i) == search) {
            (*(Zeichenkette + i) = replace);
            counter++;
        }
    }
    if (counter == 0)
        return -1;
    else
        return counter;
}

int main() {
    char ZK[10] = "abadeaghi";
    char search = 'a';
    char replace = 'x';
    std::cout << "String vor replace: " << ZK << std::endl;
    std::cout << "Return der Funktion change (Anzahl replacements): " << change(ZK, search, replace) << std::endl;
    std::cout << "String nach replace: " << ZK << std::endl;
}
