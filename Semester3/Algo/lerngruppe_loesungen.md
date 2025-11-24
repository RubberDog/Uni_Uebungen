# Aufgabe 1
## a (und b)
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
