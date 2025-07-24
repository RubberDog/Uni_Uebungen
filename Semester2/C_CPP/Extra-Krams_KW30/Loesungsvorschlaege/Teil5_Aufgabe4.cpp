#include <iostream>

int* createRandomArray(int size);

int main() {
    int size = 50;
  /*
  ist ein fieser trick hier. initialisiert man das array "normal" mit der size in main, kann man es der funktion nicht übergeben und somit nicht reinschreiben.
  erzeugt man es innerhalb von createrandomarray, kann man's nicht löschen
  */
    int* array = createRandomArray(size); 
    for (int i = 0; i < 5; i++) {
        std::cout << array[i] << std::endl;
    }
    delete[] array;
}

int* createRandomArray(int size) {
    int *array = new int[size];
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100 + 1; // google hat mir erklärt, dass man die werte aus rand modulo 100 und + 1 nehmen muss, damit man zwischen 1 und 100 landet..
    }
    return array;
}
