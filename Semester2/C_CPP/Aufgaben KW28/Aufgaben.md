# Aufgabe 1

a) Schreiben Sie eine Funktion zum Auslesen von Werten aus einer Datei mit dem Namen mw.dat. Die integer Werte in der Datei sind zeilenweise gespeichert, d.h. ein Wert pro Zeile. (Hinweis: Selbst erstellen)

Der Prototyp der Funktion sieht wie folgt aus: 

int Read(char* FileName, int Anzahl, int* Values); 

b) Binden Sie die Funktion Read in ein übergeordnetes Modul (main()) ein. 
Legen Sie sich dynamischen Speicher für 100 Werte an und rufen Sie die Funktion Read mit Filename und Anzahl der zu lesenden Werte und dem Ergebnisspeicher auf. 

Hinweis: Programmieren in ANSI-C oder C++ bleibt Ihnen überlassen.

# Aufgabe 2 

a) In einer Textdatei Datei Messwerte.dat sind neben Messwerten ein Dateikopf gespeichert:  

```MESSWERTDATEI_0001  

MESSUNG_DRUCK 

EINHEIT_hPa  

1012  
```

In der vierten Zeile steht die Anzahl der folgenden Messwerte.  

Schreiben Sie eine Funktion, die die Anzahl der Messwerte ausliest und diese über den Rückgabewert zurückgibt.  

Der Prototyp der Funktion sieht wie folgt aus:  

int DummyRead(char* FileName); 

b) Binden Sie die Funktion DummyRead in ein übergeordnetes Modul (main()) ein. Rufen Sie die Funktion mit der Datei Messwerte.dat auf und erzeugen Sie sich dynamischen Speicher für die gelesene Anzahl von Messwerten, die im integer Format vorliegen sollen. 
Prüfen Sie, ob Speicherplatz reserviert werden kann und löschen Sie den dynamischen Speicher wieder. 

Hinweis: Programmieren in ANSI-C oder C++ bleibt Ihnen überlassen. 
