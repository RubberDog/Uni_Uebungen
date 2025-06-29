#define _CRT_SECURE_NO_WARNINGS // Special-Mist, damit Visual Studio scanf zulässt

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char string1[20];
	char string2[20];
	char string3[20] = "dummyvalue";

	printf("Alles klar, wir brauchen zwei Strings. Hier bitte den ersten eingeben:\n");
	scanf("%s", &string1);
	printf("Und hier bitte den zweiten:\n");
	scanf("%s", &string2);

	printf("Okay, also nutzen wir %s und %s fuer die folgenden String-Operationen.\n", string1, string2);
	printf("Strcmp - String compare: %d\n", strcmp(string1, string2));
	printf("Dann einmal die Laengen; String1: %zu, String2: %zu\n", strlen(string1), strlen(string2));
	printf("Jetzt kommt eine dritte Variable dazu, String3: %s\n", string3);
	strcpy(string3, string1);
	printf("Kopiere String 1 (%s) in String 3 (jetzt %s)\n", string1, string3);

	int s3_len = strlen(string3);
	char string3_upper[21];
	for (int i = 0; i < s3_len; i++) {
		string3_upper[i] = toupper(string3[i]);
	}
	string3_upper[s3_len] = '\0';
	printf("Jetzt machen wir noch String3 zu uppercase: %s\n", string3_upper);

	return 0;
}
