#include <iostream>

using namespace std;

int main()
{
	int var1 = 3;
	int var2 = 5;

	cout << "Var1: " << var1 << endl;
	cout << "Var2: " << var2 << endl;
	cout << "Arithmetische Operatoren, je var1 <operator> var2" << endl;
	cout << "+ (Addition): " << var1 + var2 << endl;
	cout << "- (Subtraktion): " << var1 - var2 << endl;
	cout << "* (Multiplikation): " << var1 * var2 << endl;
	cout << "/ (Division): " << var1 / var2 << endl;
	cout << "% (Modulo): " << var1 % var2 << endl;

	cout << " " << endl;
	cout << "Vergleichsoperat(oren:" << endl;
	cout << "< (kleiner): " << (var1 < var2) << endl;
	cout << "> (groesser): " << (var1 > var2) << endl;
	cout << "== (ist gleich): " << (var1 == var2) << endl;
	cout << "!= (ungleich): " << (var1 != var2) << endl;
	cout << "<= (kleiner gleich): " << (var1 <= var2) << endl;
	cout << ">= (groesser gleich): " << (var1 >= var2) << endl;

	cout << " " << endl;
	bool var3 = true;
	bool var4 = false;
	cout << "Logische Operatoren:" << endl;
	cout << "var3 ist: " << var3 << endl;
	cout << "var4 ist: " << var4 << endl;
	cout << "&& (und): " << (var3 && var4) << endl;
	cout << "|| (oder): " << (var3 || var4) << endl;
	cout << " " << endl;

	unsigned int var5 = 5;
	unsigned int var6 = 9;
	cout << "Bitweise Operatoren:" << endl;
	cout << "var 5: " << var5 << endl;
	cout << "var 6: " << var6 << endl;
	cout << "var5 & var6 (bitwise AND): " << (var5 & var6) << endl;
	cout << "var5 | var6 (bitwise OR): " << (var5 | var6) << endl;
	cout << "var5 ^ var6 (bitwise XOR): " << (var5 ^ var6) << endl;
	cout << "var5 = ~var5 (bitwise NOT): " << (~var5) << endl;
	cout << "var5 << 1 (left shift): " << (var5 << 1) << endl;
	cout << "var6 >> 1 (right shift): " << (var6 >> 1) << endl;

	cout << " " << endl;
	cout << " " << endl;
	cout << "Yay, das hat geklappt! Na denn dann, bis naechste Woche!" << endl;
}
