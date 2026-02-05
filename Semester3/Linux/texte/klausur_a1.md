Im Unix-Schichtenmodell haben wir vier Ebenen;
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
