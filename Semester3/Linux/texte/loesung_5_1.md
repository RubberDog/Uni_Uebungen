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
