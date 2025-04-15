#include <iostream>

using namespace std;

int main() {
    int punkte;
    cout << "Geben Sie die Punktzahl ein: ";
    cin >> punkte;

    if (cin.fail() || punkte < 0 || punkte > 100) {
        cout << "Ungueltige Eingabe. Punkte muessen zwischen 0 und 100 liegen." << endl;
        return 1;
    }

    int note = punkte / 10;
  
    switch (note) {
    case 10:
    case 9:
        cout << "1,0" << endl;
        break;
    case 8:
        cout << "2,0" << endl;
        break;
    case 7:
        cout << "3,0" << endl;
        break;
    case 6:
        cout << "4,0" << endl;
        break;
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
        cout << "5,0 - you failed." << endl;
        break;
    default:
        cout << "Fehler bei der Notenberechnung." << endl;
    }
    return 0;
}
