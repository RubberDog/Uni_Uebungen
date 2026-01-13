Im Unix-Schichtenmodell haben wir vier Ebenen;
```
    Anwendungen
    ^         ^
Systemprogramme / Shell
^                      ^
      Kernel
      ^    ^
     Hardware
```

Schnittstellen:

- Hardware -> Kernel: Geräteschnittstelle (Treiber)
- Kernel -> Systemprogramme: Programmiersschnittstelle (System-calls)
- Systemprogramme -> Anwendungen: Benutzerschnittstelle (GUI, Shell-Befehle)
