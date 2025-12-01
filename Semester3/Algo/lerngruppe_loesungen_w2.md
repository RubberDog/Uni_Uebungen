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
|  while n > 0 | n | 1,5 | n x 1.5 | n x Vergleich |
|   fakt := fakt * n | n | 2.3 + 1.0 | n x 3.3 | n x Zuweisung und n mal multiplikation |
|   n := n-1 | n | 1.4 + 1.0 | n x 2.4 | n mal Zuweisung und subtraktion |
|  end - while | 1 |   |   | nix |
| Summe | 1 + 7.2 n = n |   | O(n)  | Zahlen sind egal, solang es nicht nur "1" ist. |

