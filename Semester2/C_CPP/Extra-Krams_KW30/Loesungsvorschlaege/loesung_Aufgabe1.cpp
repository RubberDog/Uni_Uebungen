#include <iostream>

void maxWert(int* pointer, int Anzahl, int& max) {
    for (int i = 0; i < Anzahl; i++) {
        if (*(pointer+ i) > max)
            max = (*(pointer + i));
    }
}


int main() {
    int max = 0;
    int field1[] = { 2, 45,76,8657,45,5345,353,778,745,53};
    int Anzahl = 10;
    maxWert(field1, Anzahl, max);
    std::cout << "Der groesste Wert im Array ist: " << max << std::endl;
}
