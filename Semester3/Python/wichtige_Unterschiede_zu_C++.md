## cout / print

### C

irgendwas mit ```printf_s```

wer benutzt das schon?

### C++
```cpp
std::cout << "Hier ist der Wert von x: " << x << ". und der Wert von y: " << y << std::endl;
```

### Python

"alt" und nicht so schön:

```python
print("Hier ist der Wert von x: " + str(x) + ", und der Wert von y: " + str(y))
```

neu und hübsch:

```python
print(f"Hier ist der Wert von {x}, und der Wert von {y}")
```

## Variablen tauschen

### C / C++

```cpp
int a = 5;
int b = 10;
int temp;

temp = a;
a = b;
b = temp;
```

### Python
```python
a = 5
b = 10
a, b = b, a
```



## Array (C) / Liste (py) in for-Loop befüllen

### C / C++

```cpp
int anzahl = std::cin << "Wie viele Zahlen sollens werden? " << std::endl;
int zahlen[] = new int[anzahl];
int wert;
for (int i = 0; i < anzahl; i++) {
    wert = std::cin << "Bitte Zahl an Position " << i << " angeben: ";
    zahlen[i] = stoi(wert);
}
```
### Python
```python
zahlen = []
anzahl = input("Wie viele Zahlen sollens werden? ")
for _ in range(anzahl):
    zahlen.append(int(input("Gib eine Zahl ein: ")))
```

## Char-Arrays / Strings verändern

### C

Kennt keine Strings. Vorsicht bei Char-Arrays - siehe folgendes:

### C++

```cpp
char text[] = "Hallo";
text[0] = 'J';  
std::cout << text << std::endl;  // Funktioniert, ergibt "Jallo"
```

aber;

```cpp
char* text = "Hallo";
text[0] = 'J';          // Undefined Behavior. SEGFAULT INCOMING.
```

Bei der Nutzung von Strings:

```cpp
std::string text = "Hallo";
text[0] = 'J'; 
std::cout << text << std::endl;  // Ergibt: "Jallo"
```

### Python

Strings sind immutable (unveränderlich):

```python
text = "Hallo"
text[0] = "J"   # Interpreter schreit vor Angst: TypeError: 'str' object does not support item assignment
```

zum "Ändern" müssen Strings neu erzeugt werden, dürfen dabei aber die alte Variable überschreiben:

```python
text = "Hallo"
text = "J" + text[1:]  # Klappt, ergibt: "Jallo"
```
