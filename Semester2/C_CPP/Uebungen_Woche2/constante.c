#include <stdio.h>

#define def_constante 13

enum zahlen {
	LOW = 25,
	MEDIUM = 50,
	HIGH = 75,
	PEWPEW = 100
};

int main()
{
	enum zahlen myEnum = PEWPEW;
	printf("ENUM: %d", myEnum);

	enum myEnum PEWPEW;
	int const constante = 37;
	printf("def_constante: %d\n", def_constante);
	printf("const-constante: %d\n", constante);
	printf("ENUM: %d\n", myEnum);
}
