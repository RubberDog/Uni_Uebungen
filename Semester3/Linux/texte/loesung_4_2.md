Ausgehend von "Beispiel 11", Seite 56;

Hat mehrere Syntax-Fehler, hier koirrigiert;

```
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void main() {
    static char *command[] = {"date", "time"};
    int zahl;

    while (true) {
        printf("\n Bitte geben Sie eine Zahl ein: ");
        printf("\n 0 = date, 1 = time: ");
        scanf("%i", &zahl);

        if (!(zahl == 0 || zahl == 1)) {
            exit(1);
        }

        if (fork() == 0) {
            execlp(command[zahl], command[zahl], NULL);
            printf("Falsche Zahl, kein command");
            exit(1);
        } else {
            wait(0);
        }
    }
}


```

Dennoch ist das Beispiel Müll.

"time" ist ein Shell-Builtin. D.h., time ist eine Funktion innerhalb der shell selbst. Mit execlp werden aber Systembefehle aufgerufen, dort existiert time nicht, schlägt also immer fehl.

nimmt man exit direkt nach ` if (!(zahl == 0 || zahl == 1)) {` heraus, werden fehleingaben ignoriert, die while-true-Schelife läuft weiter.

Entfernt man das exit(1) im fork-Zweig, würde der Kind-Prozess in "while true" zurückfallen.

Löscht man wait(), so würde der Vater-Prozess sofort wieder nach eingaben Fragen. Vater und Kind laufen also zeitgleich ab.
