#include <stdio.h>

int main() {
	int zahl;
	int summe = 0;
	printf("Alles klar, bis zu welcher Zahl soll ich fuer dich addieren (ohne multiple von 3)? ");
	if (scanf_s("%d", &zahl) != 1) {
		printf("Sorry, das ist keine Zahl. Better luck next time.");
		return 1;
	}
	for (int i = 1; i <= zahl; i++) {
		if (i % 3 == 0) {
			continue;
		} else {
			summe += i;
		}
	}
	printf("Feddisch - die Summe aller Zahlen von 1 bis %d - wobei multiple von 3 ignoriert werden - ist %d", zahl, summe);
	return 0;
}
