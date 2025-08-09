### `list` – dynamische Listen

```python
lst = [1, "abc", 3.14]
lst.append(42)
print(lst)  # [1, 'abc', 3.14, 42]
```

* Veränderte Länge, beliebige Typen möglich (auch gemischt).

### `tuple` – unveränderliche Sequenzen

```python
t = (1, "abc", 3.14)
print(t[1])   # abc
# t[0] = 99   # Fehler
```

* Immutable ( -> unveränderlich ), können gemischte Typen enthalten, als Dictionary-Key nutzbar.

### `dict` – Key-Value-Speicher

```python
d = {"name": "Nero", "age": 25}
d["city"] = "Berlin"
print(d)  # {'name': 'Nero', 'age': 25, 'city': 'Berlin'}
```

* Keys müssen hashbar ( -> unveränderlich ) sein, Reihenfolge der Einfügungen wird beibehalten (ab Python 3.7)

### `set` – Mengen

```python
s = {1, 2, 3, 2}
print(s)  # {1, 2, 3}
```

* Nur eindeutige, hashbare ( -> unveränderliche ) Elemente, schnelle Mitgliedstests.

### `frozenset` – unveränderliche Mengen

```python
fs = frozenset([1, 2, 3])
# fs.add(4)  # Fehler
```

* Immutable-Version von `set`, als Key nutzbar.

### `range` – speichereffiziente Zahlenfolge

```python
for i in range(0, 10, 2):
    print(i)  # 0, 2, 4, 6, 8
```

* Erzeugt Zahlen on-demand, kein Array.

### `bytes` – unveränderliche Byte-Sequenzen

```python
b = b"Hallo"
print(b[0])  # 72
```

* Immutable Binärdaten.

### `bytearray` – veränderliche Byte-Sequenzen

```python
ba = bytearray(b"Hallo")
ba[0] = 74  # 'J'
print(ba)   # bytearray(b'Jallo')
```

* Mutable-Version von `bytes`.

### `complex` – komplexe Zahlen

```python
z = 3 + 4j
print(z.real, z.imag)  # 3.0 4.0
print(abs(z))          # 5.0
```

* Real- und Imaginärteil, `j` statt `i`.

### `NoneType` – kein Wert

```python
x = None
if x is None:
    print("Kein Wert gesetzt")
```

* Spezielle Konstante für „kein Wert“.

### `bool` – Wahrheitswerte

```python
flag = True
print(flag + 1)  # 2
```

* Unterklasse von `int`, `True == 1`, `False == 0`.
