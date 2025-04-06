#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number = 17;
    float zahl_pi = 3.14159;
    string ausgabestring = "Python > dieser Kram";
    cout << "Integer: " << number << endl;
    cout << "Hexadezimal: " << hex << number << endl;
    cout << "Octal: " << oct << number << endl;
    cout << "Float: " << setprecision(3) << zahl_pi << endl;
    cout << ausgabestring << endl;
}
