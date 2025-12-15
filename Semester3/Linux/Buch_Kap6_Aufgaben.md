### 1

Implementieren Sie eines der folgenden Systeme in UNIX/Linux:
- eine Ampelanlage auf einer Kreuzung
- ein Flugbuchungssystem

### 2

Schreiben Sie ein C-Programm-System, das ein Parkhaus simuliert, in das Autos hineinfahren und aus dem Autos herausfahren. Es soll zwei Einfahrten und zwei Ausfahrten geben.

Erzeugen Sie Situationen, in denen man Race Conditions gut erkennt. Erweitern Sie ihr Programm so, dass keine Race Conditions mehr entstehen können.

### 3

Implementieren Sie ein kleines E-Mail-System mit Nachrichtenwarteschlangen in UNIX/Linux. Unser E-Mail-System ist in der Lage, Nachrichten gemäß ihrer Wichtigkeit zu unterscheiden. Es gibt die folgenden Kategorien:
- Nachrichtentyp 1 ... 5: very urgent
- Nachrichtentyp 6 ... 9: urgent
- Nachrichtentyp 10 ... 20: normal

Es soll ein Message-Sender implenentiert werden, der Nachrichten mit ihrem Typ in die Warteschlange stellt. Außerdem ist ein Message Receiver zu schreiben, mit dem man die Nachrichten der obigen Kategorien aus der Schlange entnehmen kann.

### 4

Schreiben Sie ein C-Programm, dass das Abfangen von Signalen demonstriert.

- Fangen Sie das Signal SIGFPE ab, das bei einer Division durch 0 gesendet wird.
- Fangen Sie viermal das Signal SIGINT ab, welches beim Drücken der Programmabbruchtaste (meist Strg+C) geschickt wird. Nach dem vierten Drück beendet es sich mit dem Aufruf der exit-Funktion.

Sie können das Programm auch mit den Signlen SIGQUIT (Strg+\) und SIGTSTP (Strg+Z) erweitern, dies funktioniert nach dem gleichen Prinzip.

### 5

Schreiben Sie zwei Funktionen, die Signalhandler sein sollen. 

Die erste Funktion soll catch_int heissen und soll ein Handler für Strg+C sien. Die Funktion soll darin bestehen, dass gezählt wird, wie oft der Benutzer die Tastenkombination "Strg+C" drückt bzw. wie oft er versucht das Programm zu verlassen. Wir legen den Schwellwert auf fünf Versuche fest.

Bei diesem Wert wird der Benutzer gefragt, ob er das Progrmam wirklich verlassen will, wenn ja, wird der Programmabbruch eingeleitet, sonst geht es weiter und der Zähler wird zurückgesetzt.

Die zweite Funktion soll catch_suspend heissen und soll alsHandler für Strg+Z dienen. Die Aufgabe besteht darin, dem Benutzer bei Aufruf die Menge der bisherigen Anschläge für Strg+C auszugeben.

Hinweis: So würde der Aufruf in `main` aussehen:

```
signal(SIGINT, catch_int);
signal(SIGTSTP, catch_suspend);
```
