#include <iostream>
#include <string>

using namespace std;

int main() {

    int zahl = 106;
    float gleitkomma = 3.4567;
    string str = "C ist immer noch doof";

    printf("Hier kommt die Zahl: %d\n", zahl);
    printf("Ein float: %f\n", gleitkomma);
    printf("%s\n", str.c_str());                        // Muss mittels c_str() in einen Character-String konvertiert werden, damit printf damit klarkommt
    printf("Ausgabe integer in dezimal: %d\n", zahl);
    printf("Ausgabe integer in hex: %x\n", zahl);
    printf("Ausgabe integer in octal: %o\n", zahl);

    return 0;
}
