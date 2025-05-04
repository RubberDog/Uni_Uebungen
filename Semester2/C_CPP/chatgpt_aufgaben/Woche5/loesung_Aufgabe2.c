#include <stdio.h>


int main() {
    int eingabe;
    int summe = 0;
    printf("Bis zu welcher Zahl moechtest du die geraden Zahlen addieren? \n");
    scanf_s("%d", &eingabe);
    for (int i = 1; i <= eingabe; i++) {
        if (i % 2 == 0) {
            summe += i;
        }
    }
    printf("Die Summe der Zahlen betraegt: %d", summe);
}
