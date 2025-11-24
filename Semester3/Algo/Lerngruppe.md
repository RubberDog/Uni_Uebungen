Aufgaben für 30.11.25: 

-> Binäre Bäume Traversieren (das PDF 01_BaumTraversierung.pdf) 

-> Und die folgenden QuickSort Aufgaben: 

Aufgabe 1: QuickSort Schritt-für-Schritt Durchführung

Gegeben ist folgendes unsortiertes Array (das ist sogar das Beispiel aus deiner Wiederholungsfrage 39!):[5, 8, 2, 1, 7, 4, 6, 0, 3]
Aufgaben:

a) Führe QuickSort manuell durch. Wähle als Pivot-Element immer das erste Element des (Teil-)Arrays.

b) Zeige für jeden rekursiven Aufruf:

- Das aktuelle (Teil-)Array
- Das gewählte Pivot-Element
- Die Partitionierung (Links: kleiner als Pivot, Rechts: größer als Pivot)
- Die beiden entstehenden Teilarrays

c) Zeichne den Rekursionsbaum, der zeigt, wie QuickSort das Array aufteilt.

d) Wie viele Vergleiche wurden insgesamt durchgeführt?
- Tipp: Die Partitionierung sollte so aussehen:
- [kleiner als Pivot] [Pivot] [größer als Pivot]

Aufgabe 2: QuickSort Analyse und Pivot-Strategien

Aufgaben:

a) Worst-Case Szenario:
- Gegeben ist das Array [1, 2, 3, 4, 5, 6, 7, 8] (bereits sortiert)
- Wähle als Pivot immer das erste Element
- Was passiert? Warum ist das problematisch?
- Welche Laufzeitkomplexität ergibt sich im Worst-Case?

b) Pivot-Strategien:
- Nenne und erkläre drei Strategien zur Bestimmung des Pivot-Elements:

- Strategie 1: ?
- Strategie 2: ?
- Strategie 3: ?

Welche Strategie ist am besten gegen den Worst-Case geschützt?

c) Komplexität von QuickSort:

- Best-Case: O(?)
- Average-Case: O(?)
- Worst-Case: O(?)

Erkläre, wann welcher Fall eintritt.

d) QuickSort vs. andere Sortierverfahren:

Vergleiche QuickSort mit:

- MergeSort: Was ist der Hauptunterschied? Welcher ist besser?
- HeapSort: Warum kann HeapSort nicht entarten?
- Bubble Sort: Warum ist QuickSort viel effizienter?

e) Eigenschaften:

- Ist QuickSort stabil? Begründe!
- Ist QuickSort in-place? (Braucht er zusätzlichen Speicher?)
- Ist QuickSort rekursiv oder iterativ?


Bonusfrage (schwer!):
- Schreibe den QuickSort Algorithmus in Pseudocode. Der Algorithmus soll:

- Ein Array a mit Index-Grenzen left und right sortieren
- Eine Partition-Funktion verwenden
- Rekursiv arbeiten

Struktur:

```
QuickSort($a: IntArray ↓left: int ↓right: int)
begin
  if left < right then
    // Partitioniere und sortiere rekursiv
  end if
end QuickSort
```
