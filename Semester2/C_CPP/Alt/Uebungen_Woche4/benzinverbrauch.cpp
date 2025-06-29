#include <iostream>

using namespace std;

int main() {
    const float preisProLiter = 1.74;
    const int gefahren = 2356;
    const float verbrauchtesBenzin = 392.675;

    float verbrauchProHundert = gefahren / verbrauchtesBenzin;
    float kostenProHundert = verbrauchProHundert * preisProLiter;

    cout << "Grundannahmen: " << endl;
    cout << "Preis pro Liter: " << preisProLiter << endl;
    cout << "Gefahrene Kilometer: " << gefahren << endl;
    cout << "Verbrauchtes Benzin in Liter: " << verbrauchtesBenzin << endl;
    cout << "Der Verbrauch pro 100km liegt bei " << verbrauchProHundert << endl;
    cout << "Das entspricht Kosten von " << kostenProHundert << " EUR pro hundert Kilometer." << endl;

    return 0;
}
