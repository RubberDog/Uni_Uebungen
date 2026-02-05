Im Unix-Schichtenmodell haben wir vier (Benutzer.. naja) Ebenen;
```
      Benutzer
      ^      ^
Standardhilfsprogramme
    ^         ^
Standardbibliothek
^                ^
UNIX-Betriebssystem
      ^    ^
     Hardware
```

Schnittstellen:

Standardhilfsprogramme -> Benutzer = Benutzerschnittstelle
Standardbibliothek -> Standardhilfsprogramme = Bibliotheksschnittstelle
Unix-Betriebssystem -> Standdardbibliothek = Systemaufrufschnittstelle
