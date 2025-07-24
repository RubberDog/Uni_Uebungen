#include <iostream>

int find(int* pointer, int size, int value);

int main() {
    int array[] = {5, 15, 25, 35, 45};
    int wert = 25;
    int size = 5;
    std::cout << "Returnwert: " << find(array, size, wert);
}

int find(int* pointer, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(pointer + i) == value)
            return (i);
    }
    return -1;
}
