#include <stdio.h>

int main()
{
	int number = 17;
	float zahl_pi = 3.14159;
	char ausgabestring[] = "Python > dieser Kram";

	printf("Integer: %d\n", number);
	printf("Hexadezimal: %x\n", number);
	printf("Octal: %o\n", number);
	printf("Float: %3.2f\n", zahl_pi);
	printf("Zeichenkette: %s\n\n", ausgabestring);
}
