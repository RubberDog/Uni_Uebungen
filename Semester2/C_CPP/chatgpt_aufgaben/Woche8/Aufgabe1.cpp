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
