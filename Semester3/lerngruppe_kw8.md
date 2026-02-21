#### 1.1

  **E**ndlich\
  **D**eterministisch\
  **E**ffektiv\
  **L**iefert (Output / Ergebnis)

#### 1.2
In Python;
```python
def ggt(A,B):
  while B > 0:
    A, B = B, A % B
  return A
``` 

#### 1.3 
<img width="422" height="542" alt="image" src="https://github.com/user-attachments/assets/aad07f3b-b300-45e9-8d99-004b4c51401e" />

#### 2.1

Doppelt verkettete Listen bieten die Möglichkeit, auf das vorherige Element zuzugreifen. Bei einfach verketteten Listen müsste man von vorn bis zur aktuellen Position - 1 erneut durchlaufen.\
Ein Nachteil ist der erhöhte Speicherbedarf, da vorherige Elemente (bzw Pointer darauf) mitgespeichert werden müssen.

#### 2.2

Ein Stack arbeitet nach dem Prinzip "Last In, First Out" (LIFO).\
Das zuletzt hinzugefügte Element wird als erstes wieder entfernt.

Die Basisoperationen lauten top(), welche das oberste Element aufruft, pop(), welche das oberste Element vom Stack entfernt, sowie put(), welche ein Element auf dem Stack ablegt.

#### 2.3
a)
<img width="350" height="255" alt="image" src="https://github.com/user-attachments/assets/bb006883-524f-41c2-ad29-048600c5345e" />

b)
32+4*73+5*+

c)

| 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10 | 11 | 12 |
| --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- | --- |
|   |   |   |   |   |    |    | +  |    | *  |    |    | 
|   |   | + |   | * |    | 3  | 3  | 5  | 5  | +  |    | 
|   | 2 | 2 | 4 | 4 | 7  | 7  | 7  | 10 | 10 | 50 |    | 
| 3 | 3 | 3 | 5 | 5 | 20 | 20 | 20 | 20 | 20 | 20 | 70 |   


#### 3.1
<img width="427" height="334" alt="image" src="https://github.com/user-attachments/assets/ce3fb3a0-34da-4541-a535-9541f3a5e821" />

#### 3.2

a) Minimal: 4\
b) Maximal: 15
