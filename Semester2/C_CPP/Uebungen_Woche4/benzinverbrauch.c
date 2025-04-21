#include <stdio.h>
#define float preisProLiter 1.74
#define float gefahren = 2356.67
#define float verbrauchtesBenzin = 392.675

int main() {

    float verbrauchProHundert = gefahren / verbrauchtesBenzin;
    float kostenProHundert = verbrauchProHundert * preisProLiter;

    printf("Grundannahmen: \n");
    printf("Preis pro Liter: %1.2lf\n", preisProLiter);
    printf("Gefahrene Kilometer: %7.2lf\n", gefahren);
    printf("Verbrauchtes Benzin in Liter: %7.2lf\n", verbrauchtesBenzin);
    printf("Der Verbrauch pro 100km liegt bei %7.2lf\n", verbrauchProHundert);
    printf("Das entspricht Kosten von %7.2lf EUR pro hundert Kilometer.\n", kostenProHundert);

    return 0;
}
