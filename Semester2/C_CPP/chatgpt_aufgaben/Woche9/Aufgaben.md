# 🧱 Aufgabe 1 – Klassen in C++: Bücherverwaltung

📝 Aufgabe: Erstelle eine Klasse Buch mit folgenden Attributen:
```
std::string titel
std::string autor
int erscheinungsjahr
```

Erstelle außerdem eine Klasse Bibliothek, die:

Einen std::vector<Buch> enthält

Methoden hat:

hinzufuegen(const Buch&)

zeigeAlle()

zeigeNachAutor(const std::string&)

Optional: Methode zum Löschen eines Buchs nach Titel hinzufügen.


# 📂 Aufgabe 2 – Dateioperationen (Textdatei): Benutzerkonten speichern

📝 Aufgabe: Schreibe ein Programm, das Benutzerkonten verwaltet.

Jeder Benutzer hat:

Benutzername (String ohne Leerzeichen)

Passwort (ebenfalls String)

Das Programm soll:

Neue Konten in eine Datei (konten.txt) anhängen

Alle gespeicherten Konten ausgeben

Ein Login prüfen: Benutzername + Passwort eingeben → prüfen, ob Kombination in Datei vorhanden ist

Hinweise:

Nutze Textdatei mit dem Format:

```
max123 geheim
anna01 abc123
tim89 passwort
```

Lies Zeile für Zeile und vergleiche Name + Passwort




# 📂 Aufgabe 3 – Datei in C oder C++: Messwerte aus Datei lesen

📝 Aufgabe: Schreibe ein Programm, das eine Datei namens messwerte.txt einliest.

Die Datei enthält pro Zeile:
```
Ort Wert
```

Das Programm soll:

Alle Einträge einlesen und speichern (z. B. in einem Array oder vector)

Die Werte ausgeben

Den Ort mit dem höchsten Messwert anzeigen

Benutze für diese Aufgabe die Datei "messwerte.txt" aus diesem Übungsordner!

# 🧱 Aufgabe 4 – Klassen in C++: Messwerte verwalten

📝 Aufgabe: Erstelle eine Klasse Messung, die folgende Attribute hat:

std::string ort

float wert

Dann erstelle eine Klasse Messreihe, die:

Ein std::vector<Messung> enthält

Methoden zur Anzeige aller Werte (zeigeAlle()), zum Berechnen des Durchschnitts (durchschnitt()) und zum Finden des Maximalwertes (maxWert())

Hinweise:

Lies 10 Messungen manuell (z. B. im main() oder per addMessung()-Funktion)

Gib am Ende alle Messungen sowie den Durchschnitt und den Maximalwert aus

Benutze für diese Aufgabe die Datei "messwerte.txt" aus diesem Übungsordner!

