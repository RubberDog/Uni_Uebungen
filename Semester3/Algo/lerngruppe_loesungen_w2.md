## PDF HeapSort

### Wenden Sie das Heap-Sort Verfahren an, um die Sortierung aus dem Vorlesungsbeispiel zu vervollständigen. Veranschaulichen Sie die Sortierschritte, indem Sie die neue Reihenfolge der zu sortierenden Elemente nach jedem Sortierschritt sowie den neuen verkürzten Heap darstellen.

1, 14, 10, 8, 7, 9, 3, 2, 4, 16

```
         1
      /    \
    14     10
  /   \   /   \
  8    7  9    3
 / \  /
2  4 16
```

7 und 16 tauschen

verkürzter Heap:
```
  16
 / 
7
```
8, 2, 4 in Ordnung

10, 9, 3 in Ordnung

14 und 16 tauschen

verkürzter Heap:

```
    16
   /   \
  8    14
 / \   /
2   4 7
```

1 und 16 tauschen
dann 1 und 14 tauschen
dann 1 und 7 tauschen

voller heap;

```
         16
       /    \
     14      10
    /  \    /  \
   8    7  9    3
  / \  /
 2  4  1
```

## PDF Feinanalyse Fakultät


### Es sei der folgende Algorithmus zur iterativen Berechnung der Fakultät einer natürlichen Zahl n gegeben. Führen Sie für den Algorithmus eine Feinanalyse in Abhängigkeit von der Problemgröße n durch.  

| Algorithmus |  Anzahl | Gewicht | Gesamt = Anzahl * Gewicht | Kommentar |
| --------- |:---|:---------|:-----|:---|
| fakt := 1 | 1 | 1.0 | 1 x 1.0 | 1x Zuweisung |
|  while n > 0 | k + 1 | 1,5 | k x 1.5 | n x Vergleich |
|   fakt := fakt * n | k | 2.3 + 1.0 | k x 3.3 | n x Zuweisung und n mal multiplikation |
|   n := n-1 | k | 1.4 + 1.0 | k x 2.4 | n mal Zuweisung und subtraktion |
|  end - while |  |   |   |  |
| Summe | 1 + 7.2 k |   | 1 + 7.2k -> O(n)  | Ergebnis FA -> 1 + 7.2k, GA -> O(n) |



## PDF Rekursion / Komplexität

### Aufgabe 1 (Rekursion) 

Gegeben sei die folgende rekursiv definierte Funktion. 

```
f(n) = ⎧ 2                 ,n = 1
       ⎩ f(n-1)·f(n-1)     ,n > 1
```

a) Schreiben Sie einen rekursiven Algorithmus, der die obige Funktion nach dem gegebenen rekursiven Schema berechnet, ohne Berechnungen zwischen zu speichern und ohne weitere Vereinfachungen. Geben Sie den Algorithmus entweder in  Pseudocode oder in Java oder in C/C++ an.

--------------
 
Zum merken;

beide Zeilen zeigen je einen if-Zweig.

vorn der return-Wert, hinter dem Komma die Bedingung

also if n = 1 -> return 2;
und if n > 1 -> func(n-1) * func(n-1)

das zweite if wird in der Kombination logischerweise ein else.
```
int func(int n) {
    if (n == 1) {
         return 2;
    } else {
         return func(n-1) * func(n-1);
    }
}
```

b) Zeichnen Sie den Baum rekursiver Aufrufe für die Funktion aus Aufgabe (a) für f(4). Beschriften Sie jeden Knoten mit dem entsprechenden Aufrufparameter.

```
                                func(4)
                          /                 \
              func(3)                             func(3)
             /        \                        /           \
     func(2)           func(2)           func(2)           func(2)
    /       \         /       \         /      \          /      \
func(1)  func(1)  func(1)  func(1)  func(1)  func(1)  func(1)  func(1)

```

### Aufgabe 2 (Komplexität Feinanalyse) 

Es sei der folgende Algorithmus zur Berechnung der n-ten Potenz einer Zahl x (also xn) gegeben. Gehen Sie davon aus, dass n vom Typ int ist. Führen Sie für den aufgeführten Algorithmus eine Feinanalyse in Abhängigkeit von der Problemgröße n durch.  

| Algorithmus |  Anzahl | Gewicht | Gesamt = Anzahl * Gewicht | Kommentar |
| --------- |:---|:---------|:-----|:---|
| p := 1 | 1 | 1.0 | | |
| while n > 0 | k + 1 | 1.5 | | |
|  if n mod 2 == 1 | k | 1.5 | | |
|    p := p * x | <= k | 3.3 | | |
|  end -- if |  | | | |
|  n := n / 2 | k | 9.0 | | |
|  x := x * x | k | 3.3 | | |
| end -- while |  | | | |
| Summe | 1.0 + (k+1) * 1.5 + k * 1.5 + k * 3.3 + 9.0 * k + 3.3 * k | | FA: 2.5 + 18.6k -> GA: O(log(n)) | Da die Schleifendurchläufe nach dem end -- if IMMER halbiert werden|
