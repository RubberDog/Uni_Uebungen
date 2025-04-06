#include <iostream>

using namespace std;

int main()
{
	char buchstabe = 'c';
	int integer = 8;
	float gleitkomma = 7.3;
	double doppel = 124567;

	cout << "Size char: " << sizeof(buchstabe) << endl;
	cout << "Size int: " << sizeof(integer) << endl;
	cout << "Size float: " << sizeof(gleitkomma) << endl;
	cout << "Size double: " << sizeof(doppel) << endl;
}
