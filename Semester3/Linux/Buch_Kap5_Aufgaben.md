### 1

Betrachten Sie das folgende Verfahren, das eine Sperrvariable zur Realisierung des Wechselseitigen Ausschluss verwendet:

Eine gemeinsam benutzte Variable (Sperrvariable, lock variable) wird mit 0 initialisiert. Will ein Prozess in seinen kritischen Bereich eintreten, so liest er die Sperrvariable:
- Ist der Wert 0 (FALSE), setzt er die Sperrvariable auf 1 (TRUE) und tritt in den kritischen Bereich ein
- Ist der Wert 1, so wartet er, bis die Sperrvariable den Wert 0 hat.

Warum ist dies keine Lösung für das Problem des wechselseitigen Ausschlusses?

### 2

Schauen Sie sich die Lösung des Strikten Alternierens zur Realisierung des wechselseitigen Ausschlusses an:
```
int an_der_Reihe = 0;
// Prozess 0
while (TRUE) {
while (an_der_Reihe != 0); //warten
kritischer_Bereich ();
an_der_Reihe = 1;
nicht_kritischer_Bereich ();
}
// Prozess 1
while (TRUE) {
while (an_der_Reihe != 1); // warten
kritischer_Bereich ();
an_der_Reihe = 0;
nicht_kritischer_Bereich ();
}
```
Entwickeln Sie ein Szenario, das folgende Behauptung belegt:

Wenn ein Prozess wesentlich langsamer als der andere ist, wird der schnelle Prozess blockiert, obwohl sich kein Prozess in einem kritischen Bereich befindet.

### 3

Geben Sie ein Codesegment für das Strikte Alternieren für n Prozesse an.

Hinweis:

Benutzen Sie die altbekannte Variable `an_der_Reihe` und eine Integer-Variable `anzahl_Prozesse`, die den Wert n bekommt. Benutzen Sie auch den Modulo-Operator.

### 4

Schreiben Sie ein Programmfragment in Pseudocode. Benutzen Sie Semaphore mit DOWN- und UP-Operationen. Folgendes soll realisiert werden:
- Ein Prozess P1 errechnet ein Ergenibs, das von Prozess P2 weiterbenutzt werden soll.
- Prozess P2 kann aber nicht ausgeführt werden, bevor das Ergebnis vorliegt.

Hinweis:

Machen Sie es nicht zu kompliziert. Sie müssen keine Schleife benutzen. Überlegen Sie sich, welchen Semaphor Sie brauchen und vor allen Dingen, wie er initialisiert werden muss. Dann müssen Sie nur noch die DOWN- und UP-Operationen an die richtige Stelle in den beiden Prozessen schreiben.

### 5

Modellieren Sie weitere Systeme aus dem täglichen Leben mit Semaphoren. 

Als Beispiele eignen sich:
- eine Ampelanlage auf einer Kreuzung
- ein Parkhaus
- ein Flugbuchungssystem

## die folgenden Aufgeben beziehen sich auf den Modulabschnitt "Threads"

### 6

Schreiben Sie eine Klasse, die für ihre Objekte die Methoden `increment-Count()` und `getCount()` definiert. Schreiben Sie ein kleines Programm in dem von mehreren Threads aus `increment_Count()` aufgerufen wird. 

Demonstrieren Sie, dass es beim Unterlassen von besonderen Schutzmaßnahmen zu Wettlaufbedingungen kommt, die zu einem falschen Zählerergebnis führen.

### 7

Verbessern Sie die Zählerklasse aus Aufgabe 6, so dass ein korrektes Funktionieren garantiert ist.

### 8

Lösen Sie die Aufgaben 6 und 7 auch mit POSIX-Threads in C.

### 9

Entwerfen Sie ein kleines Programmfragment, in dem Deadlocks auftreten können.

### 10

Schreiben Sie ein Simulationsprogramm für ein Parkhaus. Neue Autos kommen nach einem Zufallsverfahren an und Autos verlassen nach festgelegter (oder zufälliger) Wartezeit wieder das Parkhaus. Realisieren Sie jedes Fahrzeug als seperaten Thread. 

Das Parkhaus hat natürlich nur eine begrenzte Kapazität. Welche verschiedenen Lösungsmöglichkeiten gibt es (Primitivoperationen, Semaphore, etc)?

### Fragen 11 und 12 sind Java-Spezifisch, werden ignoriert.
