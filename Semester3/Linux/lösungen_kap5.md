### 1

Kurzfassung; race condition.

Zwei Threads könnten quasi-zeitgleich den Punkt der Sperrvariable erreichen. Beispiel;

```
T1 startet, liest die Sperrvariable aus, sie ist "0".
Zeitscheibe läuft ab, Kontextwechsel
T2 startet, liest die Sperrvariable aus, sie ist "0", und setzt sie auf 1.
Zeitscheibe läuft ab, Kontextwechsel
T1 ist wieder dran, hatte zuvor "0" ausgelesen, setzt Sperrvariable auf 1 - ist sie aber schon. Wird jedoch nicht mehr geprüft.
Beide Threads treten in den kritischen Bereich ein da sie der Meinung sind, exklusiven Zugriff zu haben.
```
Lösung (auch wenn hier noch nicht gefragt; test-and-set, atomare Operation.

### 2

Gleiches Problem mit Zeitscheiben.

P0 startet, Sperrvariable 0, wird auf 1 gesetzt, kritischer Bereich läuft und ist durch - vor dem setzen auf der Sperrvariablen auf 0 läuft die Zeitscheibe ab.

P1 ist dran, liest die Sperrvariable - ist noch auf 1, obwohl kein Prozess im kritischen Bereich ist. P1 muss warten, bis P0 wieder dran ist, damit dieser die Variable auf 0 setzt.

### 3

[Link zum Code der Aufgabe](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/kap5_3_strikt_alternieren.c)

### 6

[Link zum Code der Aufgabe](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/kap5_6-inc-counter.c)
