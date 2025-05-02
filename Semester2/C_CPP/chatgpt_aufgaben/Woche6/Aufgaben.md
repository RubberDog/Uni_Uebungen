# Aufgabe 1 – Gerade oder ungerade?

Schreibe ein Programm, das eine ganze Zahl einliest und prüft, ob sie gerade oder ungerade ist.
Lagere die Logik in eine Funktion ist_gerade(int zahl) aus, die true (bzw. 1) oder false (bzw. 0) zurückgibt.

Ziele:

if
einfache Funktion
Rückgabewert nutzen


# Aufgabe 2 – Summe bis N (aber ohne Vielfache von 3)
Lies eine Zahl n ein und berechne die Summe aller Zahlen von 1 bis n, aber überspringe dabei Zahlen, die durch 3 teilbar sind. Nutze dafür continue in der Schleife.

Ziele:

for-Schleife
continue
einfache arithmetische Berechnung


# Bonus-Aufgabe: "Benutzerdefinierte Statistik"
📘 Aufgabenstellung:
Schreibe ein Programm, das:

Den Benutzer fragt, wie viele Ganzzahlen er eingeben möchte.

Diese Zahlen in einem dynamischen Array speichert.

Über das Array verschiedene Statistiken berechnet, und zwar:

die größte Zahl
die kleinste Zahl
den Durchschnitt (float!)
die Anzahl aller negativen Zahlen

optional: Anzahl gerader/ungerader Zahlen

## Pflicht: Die Logik muss in folgende Funktionen ausgelagert werden:
c
Kopieren
Bearbeiten
int lies_zahl();                         // Benutzerfreundliche Eingabe einer Zahl
void lies_array(int* arr, int n);        // Liest n Zahlen in ein dynamisches Array
int finde_max(const int* arr, int n);    // Größte Zahl
int finde_min(const int* arr, int n);    // Kleinste Zahl
float berechne_durchschnitt(const int* arr, int n);
int zaehle_negative(const int* arr, int n);


Erweiterungsideen (freiwillig):
zaehle_gerade() und zaehle_ungerade()
print_array() mit for und continue, um bestimmte Werte zu überspringen
Alle Werte über dem Durchschnitt ausgeben

