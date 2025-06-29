# 🔧 Aufgabe 1: Produktverwaltung
Beschreibung: Erstelle ein Programm zur Verwaltung von Produkten in einem Lager.

Anforderungen:

Struktur Produkt mit char name[50], int artikelnummer, float preis

Array zur Speicherung von 5 Produkten

Funktionen:

Ausgabe aller Produkte

Ermittlung des teuersten Produkts

Zusätzlich: Lagere die Funktionen in eine separate Datei lager.c und lager.h aus.

# 📊 Aufgabe 2: Statistik über Messwerte
Beschreibung: Ein Programm soll Messwerte verwalten und analysieren.

Anforderungen:

Struktur Messwert mit char ort[30], float temperatur, float luftfeuchtigkeit

Array für 10 Messwerte

Funktionen:

Mittelwerte für Temperatur und Luftfeuchtigkeit berechnen

Alle Messwerte ausgeben

Verwende separate Dateien: statistik.c, statistik.h, main.c

# 📚 Aufgabe 3: Bücherkatalog
Beschreibung: Erstelle ein Programm zur Verwaltung einer kleinen Bibliothek.

Anforderungen:

Struktur Buch mit char titel[100], char autor[50], int jahr

Array für 5 Bücher

Funktionen:

Bücher ausgeben

Ältestes Buch ermitteln

Bonus: Suche nach einem Autor (Eingabe vom Nutzer)

Logik auslagern in bibliothek.c und bibliothek.h

# 👥 Aufgabe 4: Teilnehmerliste eines Seminars
Beschreibung: Teilnehmer:innen sollen verwaltet werden.

Anforderungen:

Struktur Teilnehmer mit char name[50], int teilnehmernummer, int anwesenheit (in %)

Funktionen:

Liste ausgeben

Durchschnittliche Anwesenheit berechnen

Teilnehmer:innen mit < 50 % anzeigen

Aufteilung: Hauptlogik in main.c, Funktionen in seminar.c und seminar.h

# ⚙️ Aufgabe 5: Maschinenüberwachung
Beschreibung: Maschinen sollen anhand von Sensordaten überwacht werden.

Anforderungen:

Struktur Maschine mit char id[10], float temperatur, float drehzahl

Array für 5 Maschinen

Funktionen:

Maschinen ausgeben

Maschinen mit Temperatur > 80 °C auflisten (Warnung)

Modularisierung: Trenne Logik und Datenstruktur

