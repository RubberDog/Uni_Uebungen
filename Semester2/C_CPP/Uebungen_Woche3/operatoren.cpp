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

	bool var3 = true;
	bool var4 = false;

	cout << "var3 ist: " << var3 << endl;
	cout << "var4 ist: " << var4 << endl;
	cout << "&& (und): " << (var3 && var4) << endl;
	cout << "|| (oder): " << (var3 || var4) << endl;
	cout << " " << endl;
	cout << "Keine Idee fuer Bitweise Operatoren" << endl;

}
