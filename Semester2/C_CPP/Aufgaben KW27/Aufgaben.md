# Aufgabe 1:

Gegeben ist ein integer – Array. 

a) Schreiben Sie eine allgemeingültige Funktion, die in einem integer Array 
nach einem bestimmten Wert sucht. Ist der Wert vorhanden soll der entsprechende Index 
über den Rückgabewert zurückgegeben werden, anderenfalls soll -1 zurückgegeben werden. 

Prototyp der Funktion: 

int search(int* pointer, int Anzahl, int Wert); 

b) Binden Sie die Funktion durch Deklarierung in ein übergeordnetes Modul (main()) 
ein und rufen Sie die Funktion mit einem Beispielwert auf.


# Aufgabe 2:

a) Schreiben Sie eine allgemeingültige Funktion zur Berechnung des 
Mittelwertes eines eindimensionalen integer Arrays. Das Ergebnis soll über die Parameterliste der 
Funktion zurückgegeben werden. Der Rückgabewert soll 0 sein, wenn der Mittelwert 0 ist, anderenfalls 1. 

Die Deklaration der Funktion lautet: 

int Mittel(int* Pointer, int Anzahl, double &Mittelwert); 

b) Binden Sie die Funktion durch Deklarierung in ein übergeordnetes Modul (main()) 
ein und rufen Sie die Funktion mit dem Array auf. 


# Aufgabe 3

a) Schreiben Sie eine allgemeingültige Funktion, die in einer Zeichenkette nach einem 
bestimmten Zeichen sucht und dieses gefundene Zeichen durch ein anderes Zeichen 
ersetzt. Geben Sie Anzahl der gefundenen Zeichen über den Rückgabewert der Funktion zurück. Werden keine  
übereinstimmenden Zeichen gefunden, soll -1 zurückgegeben werden. 

Die Deklaration der Funktion lautet: 

int change(char* Zeichenkette, char search, char replace);  

b) Binden Sie die Funktion durch Deklarierung in ein übergeordnetes Modul (main()) ein 
und rufen Sie die Funktion mit einer Beispielzeichenkette auf.


# Aufgabe 4 

a)  Schreiben Sie eine Funktion zur Berechnung des Endkapitals bei 
einer festen jährlichen Verzinsung ohne Ausschüttung der Zinsen 
bei einer vorgegebenen Laufzeit. Der Rückgabewert soll bei 
Eingabe eines negativen Grundkapitals 0 sein, sonst 1. Dieses ist 
beim Aufruf der Funktion zu berücksichtigen.  

Die Deklaration der Funktion lautet:       

int kapital(double GK, double Z, int LZ, double &Endkapital); 

b)  Binden Sie die Funktion durch Deklarierung in ein übergeordnetes 
Modul (main())  ein und rufen Sie die Funktion beispielhaft auf. 


