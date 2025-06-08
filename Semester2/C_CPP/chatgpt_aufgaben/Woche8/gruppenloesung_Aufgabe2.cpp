//Implementiert eine Funktion, die ein dynamisches Array erstellt, Werte einliest, das Array mittels Bubblesort(https://de.wikipedia.org/wiki/Bubblesort#Algorithmus ) sortiert und dann zurückgibt.
//Verwendet dafür Zeiger als Funktionsparameter und achtet auf korrektes Speichermanagement(malloc / free in C, new / delete in C++).
 
#include <iostream>
using namespace std;
 
 
int* createarray(int &arraysize)
{
    printf_s("Wie groß soll das Array werden?: ");
    scanf_s("%d", &arraysize);
    //return (int*)malloc(arraysize * sizeof(int));
    int* array = (int*)malloc(arraysize * sizeof(int));
    return array;
}
 
void Eingabe(int* array, int arraysize)
{
    cout << "Welche Werte sollen in das Array?" << endl;
    for (int i = 0; i < arraysize; i++) 
    { 
        cin >> array[i]; 
    }
}
 
void sortierung(int* array, int arraysize)
{
    for (int i = arraysize; i > 1; i = i - 1)
    {
        for (int b = 0; b < i -1; b = b + 1)
        {
            if (array[b] > array[b + 1])
            {
                int temp = array[b];
                array[b] = array[b + 1];
                array[b + 1] = temp;
            }
        }
    }
}
 
void ausgabe(int* array, int arraysize)
{
    for (int i = 0; i < arraysize; i++)
    {
        cout << "Bidde sehr: " << array[i] << endl;
    }
}
 
 
int main()
{
    int groesse = 0;
    int* array = createarray(groesse);
 
    Eingabe(array, groesse);
    sortierung(array, groesse);
    ausgabe(array, groesse);
    return 0;
}
