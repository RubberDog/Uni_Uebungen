nclude <stdio.h>

int ist_gerade(int zahl) {
	if (zahl % 2 == 0)
		return 1;
	else
		return 0;
}

int main() {
	int zahl;
	printf("Alles klar, welche Zahl soll ich fuer dich ueberpruefen? ");
	if (scanf_s("%d", &zahl) != 1) {
		printf("Sorry, das ist keine Zahl. Better luck next time.");
		return 1;
	}
	if (ist_gerade(zahl) == 1) {
		printf("Jup, %d ist gerade.", zahl);
	}
	else {
		printf("Sorry, %d ist ungerade.", zahl);
	}
	return 0;
}
