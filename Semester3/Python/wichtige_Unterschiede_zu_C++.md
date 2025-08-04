## Array (C) / Liste (py) in for-Loop befüllen;

### C / C++

```
int anzahl = std::cin << "Wie viele Zahlen sollens werden? " << std::endl;
int zahlen[] = new int[anzahl];
int wert;
for (int i = 0; i < anzahl; i++) {
    wert = std::cin << "Bitte Zahl an Position " << i << " angeben: ";
    zahlen[i] = stoi(wert);
}
```
### Python
```
zahlen = []
anzahl = input("Wie viele Zahlen sollens werden? ")
for _ in range(anzahl):
    zahlen.append(int(input("Gib eine Zahl ein: ")))
```

## Variablen tauschen

### C / C++

```
int a = 5;
int b = 10;
int temp;

temp = a;
a = b;
b = temp;
```

### Python
```
a = 5
b = 10
a, b = b, a
```
