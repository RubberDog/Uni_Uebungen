# Einfache Funktionen:

## Aufgabe 1: Maximalwert in einem Array
a) Schreiben Sie eine Funktion, die den größten Wert in einem ganzzahligen Array ermittelt und über einen Referenzparameter zurückgibt.
Geben Sie über den Rückgabewert an, ob der Vorgang erfolgreich war (1) oder das Array leer war (0).

Deklaration:

```
int maxWert(int* pointer, int Anzahl, int& max);
```
b) Binden Sie die Funktion in ein Hauptprogramm ein und testen Sie diese mit einem Beispiel-Array.

## Aufgabe 2: Umwandlung von Zeichen in Großbuchstaben

a) Schreiben Sie eine Funktion, die eine Zeichenkette durchläuft und alle Kleinbuchstaben in Großbuchstaben umwandelt.
Geben Sie über den Rückgabewert die Anzahl der umgewandelten Zeichen zurück.

Deklaration:
```
int toUpper(char* zeichenkette);
```
b) Rufen Sie die Funktion mit einer Beispielzeichenkette in main() auf.

HINT: die funktion toupper() macht genau das für ein übergebenes Zeichen. Benötigt in C++ den include von \<cctype\>

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


# Arbeit mit Dateien:

## Aufgabe 6: Datei Zeilen zählen

a) Schreiben Sie eine Funktion, die die Anzahl der Zeilen in einer Textdatei zählt. Jede Zeile enthält genau einen Wert.
Geben Sie die Anzahl der Zeilen über den Rückgabewert zurück.

Funktionsprototyp:

```
int countLines(char* FileName);
```

b) Integrieren Sie die Funktion in main(), geben Sie die ermittelte Zeilenanzahl auf dem Bildschirm aus.

## Aufgabe 7: Zeichenweise Datei lesen
a) Schreiben Sie eine Funktion, die eine Textdatei zeichenweise liest und alle Leerzeichen (' ') durch Unterstriche ('_') ersetzt.
Die Ausgabe erfolgt auf dem Bildschirm.

Prototyp:

```
int replaceAndPrint(char* FileName);
```
b) Binden Sie die Funktion in main() ein und testen Sie sie mit einer selbst erstellten Datei (z. B. text.txt).

## Aufgabe 8: Einfache CSV-Datei lesen

a) In einer Datei daten.csv befinden sich durch Komma getrennte Zahlen in einer einzigen Zeile (z. B. 12,34,56,78).
Schreiben Sie eine Funktion, die diese Zahlen einzeln einliest und summiert.

Prototyp:

```
int sumCSV(char* FileName, int& Summe);
```
b) Rufen Sie die Funktion in main() auf und geben Sie die Summe aus.

## Aufgabe 9: Namen in Datei speichern

a) Schreiben Sie eine Funktion, die einen Vor- und Nachnamen vom Benutzer einliest und in eine Datei namen.txt schreibt.
Die Namen sollen durch ein Leerzeichen getrennt sein, z. B. Max Mustermann.

Prototyp:

```
int writeName(char* FileName, char* vorname, char* nachname);
```
b) Binden Sie die Funktion in main() ein und testen Sie sie mit Beispielnamen.

## Aufgabe 10: Datei kopieren

a) Schreiben Sie eine Funktion, die den Inhalt einer Textdatei quelle.txt zeilenweise in eine andere Datei ziel.txt kopiert.
Der Rückgabewert soll 1 bei Erfolg, 0 bei Fehler sein.

Prototyp:
```
int copyFile(char* Quelle, char* Ziel);
```
b) Rufen Sie die Funktion in main() auf und geben Sie Erfolg oder Fehler aus.

# Klassen

## Aufgabe 11: Klasse Datum
a) Deklarieren Sie eine Klasse Datum mit den Membervariablen:
- Tag (int)
- Monat (int)
- Jahr (int)

Definieren Sie innerhalb der Klasse:

- Standardkonstruktor (setzt 01.01.2000)
- Initialisierungskonstruktor
- Destruktor

Definieren Sie außerhalb der Klasse:

- Setter für Monat
- Getter für Jahr
- eine Operatorfunktion ==, um zwei Datumsobjekte zu vergleichen

b) Erzeugen Sie zwei Datumsobjekte und vergleichen Sie diese mit == und mit der Langschreibweise operator==.

## Aufgabe 12: Klasse Produkt

a) Deklarieren Sie eine Klasse Produkt mit den Membervariablen:
- Name (string)
- Preis (double)
- Lagerbestand (int)

Definieren Sie innerhalb der Klasse:
- Standardkonstruktor
- Initialisierungskonstruktor
- Destruktor

Definieren Sie außerhalb der Klasse:

- Funktion auffuellen(int) → erhöht den Lagerbestand
- Funktion verkaufen(int) → verringert den Lagerbestand
- Setter für Preis
- Getter für Name

b) Erzeugen Sie zwei Produkte im main() und rufen Sie beide Funktionen mit verschiedenen Werten auf.

## Aufgabe 13: Klasse Uhrzeit

a) Deklarieren Sie eine Klasse Uhrzeit mit den Membervariablen:

- Stunde (int)
- Minute (int)
- Sekunde (int)

Definieren Sie innerhalb der Klasse:
- den Standardkonstruktor (setzt Uhrzeit auf 00:00:00)
- den Initialisierungskonstruktor
- den Destruktor

Definieren Sie außerhalb der Klasse:
- addSekunden(int sek) → fügt Sekunden hinzu und korrigiert Stunde/Minute entsprechend
- anzeigen() → gibt Uhrzeit im Format hh:mm:ss auf dem Bildschirm aus

b) Erzeugen Sie zwei Uhrzeit-Objekte im main() und testen Sie beide Methoden.

## Aufgabe 14 : Klasse Box

a) Deklarieren Sie eine Klasse Box mit den Membervariablen:
- Länge (double)
- Breite (double)
- Höhe (double)

Definieren Sie innerhalb der Klasse:
- den Standardkonstruktor (setzt alle Werte auf 1.0)
- den Initialisierungskonstruktor
- den Destruktor

Definieren Sie außerhalb der Klasse:
- berechneVolumen() → gibt das Volumen der Box zurück
- vergleiche(Box b) → gibt true zurück, wenn die Volumen gleich sind

b) Erzeugen Sie zwei Box-Objekte im main() und vergleichen Sie deren Volumen.

## Aufgabe 15: Klasse Stoppuhr

a) Deklarieren Sie eine Klasse Stoppuhr mit den Membervariablen:

- Startzeit (int, in Sekunden)
- Endzeit (int, in Sekunden)

Definieren Sie innerhalb der Klasse:
- den Standardkonstruktor (setzt beide Werte auf 0)
- den Initialisierungskonstruktor
- den Destruktor

Definieren Sie außerhalb der Klasse:

- setStart(int sek) und setEnd(int sek)
- dauer() → berechnet die vergangene Zeit zwischen Start und Ende

b) Erzeugen Sie zwei Stoppuhr-Objekte im main() und berechnen Sie jeweils die Dauer.
