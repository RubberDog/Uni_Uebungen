#include <iostream>

int main()
{
    int anzahl;
    int summe = 0;
    std::cout << "Wie viele Zahlen soll ich addieren? ";
    std::cin >> anzahl;
    if (std::cin.fail())
    {
        std::cout << "Fehlerhafte Eingabe - das geht leider nicht!" << std::endl;
        return 1;
    }

    int i = 1;
    while (i < anzahl)
    {
        summe += i;
        i++;
    }
    std::cout << "Summe nach Ende der while-Schleife: " << summe << std::endl;

    summe = 0;
    int j = 1;
    do
    {
        summe += j;
        j++;
    } while (j < anzahl);
    std::cout << "Summe nach Ende der do-while-Schleife: " << summe << std::endl;

    summe = 0;
    for (int k = 1; k < anzahl; k++)
    {
        summe += k;
    }
    std::cout << "Summe nach Ende der for-Schleife: " << summe << std::endl;
}
