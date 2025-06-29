#include <iostream>

int main()
{
	int stellen;
	std::cout << "Bis zu wie vielen Stellen soll ich die Fibonacci-Folge berechnen? ";
	std::cin >> stellen;
	if (std::cin.fail())
	{
		std::cout << "Sorry, da ging was schief. Starte erneut!";
		return 1;
	}

	long int fib1 = 0, fib2 = 1;

	for (int i = 0; i <= stellen; i++)
	{
		if (i == 0)
		{
			std::cout << fib1 << std::endl;
		} else if (i == 1) {
			std::cout << fib2 << std::endl;
		}
		else {
			long int next = fib1 + fib2;
			std::cout << next << std::endl;
			fib1 = fib2;
			fib2 = next;
		}
	}
	return 0;
}
