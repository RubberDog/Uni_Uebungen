Gleiches Problem mit Zeitscheiben.

P0 startet, Sperrvariable 0, wird auf 1 gesetzt, kritischer Bereich läuft und ist durch - vor dem setzen auf der Sperrvariablen auf 0 läuft die Zeitscheibe ab.

P1 ist dran, liest die Sperrvariable - ist noch auf 1, obwohl kein Prozess im kritischen Bereich ist. P1 muss warten, bis P0 wieder dran ist, damit dieser die Variable auf 0 setzt.
