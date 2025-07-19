# Einfache Funktionen:

## Aufgabe 1: Maximalwert in einem Array
a) Schreiben Sie eine Funktion, die den größten Wert in einem ganzzahligen Array ermittelt und über einen Referenzparameter zurückgibt.
Geben Sie über den Rückgabewert an, ob der Vorgang erfolgreich war (1) oder das Array leer war (0).

Deklaration:

cpp
Kopieren
Bearbeiten
int maxWert(int* pointer, int Anzahl, int& max);
b) Binden Sie die Funktion in ein Hauptprogramm ein und testen Sie diese mit einem Beispiel-Array.

## Aufgabe 2: Umwandlung von Zeichen in Großbuchstaben
a) Schreiben Sie eine Funktion, die eine Zeichenkette durchläuft und alle Kleinbuchstaben in Großbuchstaben umwandelt.
Geben Sie über den Rückgabewert die Anzahl der umgewandelten Zeichen zurück.

Deklaration:
```
int toUpper(char* zeichenkette);
```
b) Rufen Sie die Funktion mit einer Beispielzeichenkette in main() auf.

HINT: die funktion toupper() macht genau das für ein übergebenes Zeichen.

## Aufgabe 3: Fakultätsberechnung mit Überprüfung
a) Schreiben Sie eine Funktion zur Berechnung der Fakultät einer Zahl (z. B. 5! = 120).
Wird eine negative Zahl übergeben, soll die Funktion 0 zurückgeben, sonst die berechnete Fakultät als long long.

Deklaration:
```
long long fakultaet(int zahl);
```
b) Integrieren Sie die Funktion in main() und testen Sie diese mit positiven und negativen Zahlen.

HINT: Die Fakultät wird wie folgt berechnet:
```
n!=n⋅(n−1)⋅(n−2)⋅⋯⋅2⋅1
```

In einfach erklärt: Will man die Fakultät von 6, rechnet man 6 * 5 * 4 * 3 * 2 * 1

Von 9: 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1

Die Fakultät von 0 ist IMMER 1.

## Aufgabe 4: Anzahl gerader Zahlen im Array
a) Schreiben Sie eine Funktion, die in einem ganzzahligen Array die Anzahl gerader Zahlen zählt.
Geben Sie diese Anzahl als Rückgabewert zurück.

Deklaration:
```
int anzahlGerade(int* pointer, int Anzahl);
```
b) Binden Sie die Funktion in ein Hauptprogramm ein und rufen Sie sie mit einem Beispielarray auf.

## Aufgabe 5: Zeichen löschen in Zeichenkette

a) Schreiben Sie eine Funktion, die alle Vorkommen eines bestimmten Zeichens in einer Zeichenkette löscht (z. B. alle Leerzeichen entfernen).
Die Zeichenkette soll dabei in-place verändert werden. Rückgabewert ist die Anzahl gelöschter Zeichen.

Deklaration:

```
int loescheZeichen(char* zeichenkette, char zuLoeschen);
```
b) Testen Sie die Funktion im main() mit einer Beispielzeichenkette.
