#include <stdio.h>

int main() {

    // Eine Tabelle basteln
    printf("%-25s %5s\n", "Typ", "Bytes");
    printf("-------------------------------\n");

    // die verschiedenen Datentypen
    printf("%-25s %5zu\n", "char", sizeof(char));
    printf("%-25s %5zu\n", "int", sizeof(int));
    printf("%-25s %5zu\n", "float", sizeof(float));
    printf("%-25s %5zu\n", "double", sizeof(double));
    printf("%-25s %5zu\n", "long double", sizeof(long double));

    printf("\n");

    // jeweils als Array mit 5 Elementen
    printf("%-25s %5zu\n", "char[5]", sizeof(char[5]));
    printf("%-25s %5zu\n", "int[5]", sizeof(int[5]));
    printf("%-25s %5zu\n", "float[5]", sizeof(float[5]));
    printf("%-25s %5zu\n", "double[5]", sizeof(double[5]));
    printf("%-25s %5zu\n", "long double[5]", sizeof(long double[5]));

    printf("\n");

    // opinter auf alles
    printf("%-25s %5zu\n", "char*", sizeof(char*));
    printf("%-25s %5zu\n", "int*", sizeof(int*));
    printf("%-25s %5zu\n", "float*", sizeof(float*));
    printf("%-25s %5zu\n", "double*", sizeof(double*));
    printf("%-25s %5zu\n", "long double*", sizeof(long double*));

    // notiz für mich; pointer-size ist abhängig von der architektur
    // 32 bit hat 4 byte, 64 hat 8 an Adressraum

    return 0;
}
