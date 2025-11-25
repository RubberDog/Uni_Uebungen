# PDF

## 1 

### a

```
       4
     /     \
  2         6
 /  \      /  \
1    3    5    7
```
Dies ist nicht eindeutig.

Aus einer einzelnen Traversierung lassen sich mehrere Bäume erstellen. Für eine eindeutige Zuordnung wird eine zweite Traversierung benötigt.

### b

## 2


## 3

### a

```
        10
    /       \ 
   3        16
 /  \      /  \ 
2    4    13   18
         /  \
        11  14
```

### b
```
               10
          /          \
         3           16
        / \          /  \
       2   4       13    18
            \      /   \
             9    11    14
                   \    \
                    12   15
```

# ChatGPT-Aufgaben

# Aufgabe 1
## a (und b)

Notiz; Lomuto-Verfahren. Hoare hätte einen Pointer von Links, einen von Rechts.

```
Array: 5, 8, 2, 1, 7, 4, 6, 0, 3

Pivot lt Aufgabe: erstes Element, 5

i = 1
j = 1

i bleibt stehen, j sucht Wert < Pivot

8 < 5? nein
2 < 5? ja

Werte Array[i] und Array[j] tauschen

5, 2, 8, 1, 7, 4, 6, 0, 3

i erhöhen, i = 2
j läuft weiter

1 < 5? ja

Werte Array[i] und Array[j] tauschen

5, 2, 1, 8, 7, 4, 6, 0, 3

i = 3
j läuft weiter

7 < 5? nein
4 < 5? ja

Werte Array[i] und Array[j] tauschen

5, 2, 1, 4, 7, 8, 6, 0, 3

i = 4
j läuft weiter

6 < 5? nein
0 < 5? ja

Werte i & j tauschen

5, 2, 1, 4, 0, 8, 6, 7, 3

i = 5
j läuft weiter

3 < 5? ja

i & j tauschen

5, 2, 1, 4, 0, 3, 6, 7, 8

pivot mit letztem kleineren element tauschen

3, 2, 1, 4, 0, 5, 6, 7, 8

split beim alten pivot; 
linkes array 3, 2, 1, 4, 0
rechtes array 6, 7, 8

lnikes array;
3, 2, 1, 4, 0
pivot 3

i = 1, j = 1

2 < 3? ja

3, 2, 1, 4, 0
(kein tausch weil beide zeiger auf A[1] zeigen)

i = 2
j weiter

1 < 3? ja
3, 2, 1, 4, 0
erneut kein tausch

i = 3
j weiter

4 < 3? nein
0 < 3? ja

3, 2, 1, 0, 4

pivot-tausch mit i-1

0, 2, 1, 3, 4

links: 0, 2, 1
rechts: 4

links:
0, 2, 1
pivot 0

i = 1, j = 1

2 < 0? nein
1 < 0? nein

kein pivot-ersetzen, da an richtiger stelle

linker teil= NULL
rechter teil= 2, 1

pivot 2

i = 1, j = 1

1 < 2? ja
1, 2

fertig

rechter teil: 3, 4
pivot 3

4 < 3? nein
fertig, sortiert

rechtes array: 6, 7, 8
pivot 6

i = 1, j = 1

7 < 6? nein
8 < 6? nein

fertig. 
linker teil = NULL
rechter teil = 7, 8

pivot 7

8 < 7? nein
fertig sortiert

array fertig

0, 1, 2, 3, 4, 5, 6, 7, 8
```

## c

```
[5,8,2,1,7,4,6,0,3]
    /            \
[3,2,1,4,0]     [6,7,8]
  /      \          \
[0,2,1]  [4]        [7,8]
   /      \           /
 [1,2]    []        [8]
   /                 \
 [2]                 []
 /
[]
```

# 2
## a

Array = [1,2,3,4,5,6,7,8], Pivot immer das erste Element

dadurch gibt es nie ein linkes Teil-Array, ergo müssen n Durchläufe gemacht werden, in denen immer n -1 Elemente des rechten Teil-Array verglichen werden müssen

Eigentlich hat Quicksort im "normalfall" eine laufzeitkomplexität von O(log(n)), da die Menge der zu sortierenden Elemente immer wieder halbiert wird. Hier passiert dies nicht, somit eine komplexität von O(n²)

## b

- Man nimmt das erste oder das letzte Element

- Man nutzt das mittlere Element (Index!) des gesamten Array

- "Median of three", es werden drei Elemente des Array ausgewählt - zufällig, oder klassischerweise das erste, das mittlere und letzte. Hiervon nimmt man den mittleren Wert und legt diesen als Pivot fest.

Am sichersten gegen den worst-case ist hier median-of-three. Durch den Median von drei Elementen ist es statistisch sehr unwahrscheinlich, hier einen worst-case zu erreichen.

Bei Vorsortierten Arrays wäre das erste oder letzte Element quasi ein garant für den Worst case, bei Wahl des Mittleren Elements bleibt eine höhere Gefahr für Worst Case als bei Median - hier gibt es nämlich garantiert einen kleineren Wert.

## c

Best-Case: O(n log n)
- Jedes Array wird immer exakt in der Mitte geteilt

Average-Case: O(n log n)
- Der Durchschnitt teilt immer (etwa) in der Mitte, so dass die Laufzeit O(n log n) erhalten bleibt

Worst-Case: O(n²)
- Worst case haben wir ein vorsortiertes Array und wählen immer das erste oder letzte Element als Pivot. Somit gibt es keine Teilungen.

## d 


## e

1) Ist QuickSort stabil? Begründe!

- Nein, QuickSort ist nicht stabil. Elemente mit gleichem Wert können ihre relative Reihenfolge verlieren.

2) Ist QuickSort in-place? (Braucht er zusätzlichen Speicher?)

- Ja, QuickSort arbeitet in-place. Es wird zusätzlicher Speicher auf dem Call-Stack benötigt, um die Daten der einzelnen rekursiven Aufrufe zu speichern

4) Ist QuickSort rekursiv oder iterativ?

- Quicksort ist rekursiv, weil "Divide and Conquer"
