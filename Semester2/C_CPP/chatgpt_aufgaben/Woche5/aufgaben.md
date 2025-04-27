# Aufgabe 1 

"Passwort-Eingabe mit Wiederholung"
Beschreibung:

Das Programm verlangt ein Passwort (z. B. "geheim").

Wenn der Benutzer falsch eingibt, soll er maximal 3 Versuche haben.

Bei korrektem Passwort erscheint "Zugang gewährt", sonst "Zugang verweigert" nach 3 Fehlversuchen.

→ Schwierigkeit: Zählen der Versuche + richtige Schleifenbedingung.



# Aufgabe 2

 "Summiere alle geraden Zahlen"
Beschreibung:

Dein Programm fragt:
"Bis zu welcher Zahl willst du die geraden Zahlen addieren?"

Danach rechnet es alle geraden Zahlen (2, 4, 6, …) bis zu dieser Zahl zusammen.

Beispiel:

makefile
Kopieren
Bearbeiten
Eingabe: 10
Ergebnis: 2 + 4 + 6 + 8 + 10 = 30
→ Schwierigkeit: Nur bestimmte Zahlen summieren (if (zahl % 2 == 0)).


# Aufgabe 3 (Bonus)

"Finde die größte Zahl in einem Array (nur mit Pointern)"
Beschreibung:

Dein Programm soll:

Den Benutzer fragen, wie viele Zahlen er eingeben möchte.

Ein Array dynamisch erstellen (mit new in C++ oder mit einem statischen Array in C, je nachdem was du möchtest).

Die Zahlen einlesen.

Nur mit Pointern (keine []-Klammern!) durch das Array laufen und die größte Zahl finden.

Die größte Zahl ausgeben.


Beispiel-Ablauf:

  Wie viele Zahlen möchtest du eingeben? 5
  Gib Zahl 1 ein: 12
  Gib Zahl 2 ein: 45
  Gib Zahl 3 ein: 7
  Gib Zahl 4 ein: 64
  Gib Zahl 5 ein: 23
  
  Die größte Zahl ist: 64


Zusatzhinweise:

Keine normale Array-Syntax wie array[i] verwenden — nur Zeiger-Arithmetik (*(ptr + i) oder ähnliches).

In C++ wäre new und delete sinnvoll, in C könntest du statisches Array oder malloc/free benutzen.

Wenn du magst, kannst du auch nach der Ausgabe den Speicher wieder freigeben, wenn du ihn dynamisch angelegt hast (das wäre noch ein Pluspunkt 😉).
