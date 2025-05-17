#include <iostream>

void refswap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void pointswap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void valueswap(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int x = 5;
	int y = 7;
	std::cout << "Bevor irgendwas passiert: " << std::endl;
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "swap via Pointer; " << std::endl;
	pointswap(&x, &y);
	std::cout << "Nach dem swap per Pointer; x = " << x << ", y = " << y << std::endl;
	std::cout << "Und jetzt per referenz: " << std::endl;
	refswap(x, y);
	std::cout << "Nach dem swap: x = " << x << ", y = " << y << std::endl;
	std::cout << "Zu guter letzt, \"call by value\": " << std::endl;
	valueswap(x, y);
	std::cout << "Nach dem swap: x = " << x << ", y = " << y << std::endl;
}

/*
Und, was sind die Unterschiede?
referenz und pointer haben den gleichen Effekt. 
Per referenz ist allerdings deutlich simpler. Pointer sind doof.
Der wichtigste Unterschied ist bei "call by value" zu sehen:
Hier werden die Variablen x und y im Hauptprogramm nicht vertauscht!
Bei "call by value" werden die übergebenen Variablen kopiert und fungieren dann als lokale Variablen in der Funktion.
Das ist Klasse, wenn man die Variablen nicht verändern will. Ein Ergebnis lässt sich dennoch mit return ausgeben.
Doof ist allerdings, dass sich somit immer nur ein Wert "ändern" lässt.
*/
