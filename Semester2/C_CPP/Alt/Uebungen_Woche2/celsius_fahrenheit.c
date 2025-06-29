#include <stdio.h>

int main()
{
	double temp_f;
	double temp_c;
	printf("Temperatur in Fahrenheit:\n");
	scanf_s("%lf", &temp_f, 1);
	temp_c = (temp_f - 32) * 5.0 / 9.0;
	printf("%lf Grad Fahrenheit entspricht %lf Grad Celsius.", temp_f, temp_c);
}
