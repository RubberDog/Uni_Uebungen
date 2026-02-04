1. Skizzieren Sie das UNIX Schichtenmodell!\
Kennzeichnen und benennen Sie die drei Schnittstellen zum Betriebssystem. 

2. Nennen Sie fünf typische Verzeichnisse direkt aus dem UNIX Root Verzeichnis oder aus Unterverzeichnissen und deren typischen Inhalt bzw. Aufgabe!  

3. Schreiben Sie ein Shell-Script mit dem Namen myquestion. Dieses Script 
erhält als Parameter den Text einer Frage, die mit ‚Ja‘ oder ‚Nein‘ beantwortet werden kann. Antwortet der Benutzer mit Ja, so liefert das Script den 
Rückgabewert 0, bei Nein wird 1 geliefert, andernfalls erscheint die Frage noch einmal. 

4. Schreiben Sie ein Shell-Script, mit dem Sie eine Datei löschen können. Die 
zu löschende Datei soll als Parameter beim Aufruf mitgegeben werden. Vor 
dem Löschen soll nachgefragt werden, ob die Datei tatsächlich gelöscht 
werden soll. Rufen Sie dazu das oben erstellte Skript auf und verwenden 
dessen Rückgabewert als Entscheidung für das Löschen/Nicht-Löschen. 


5. Welche Gemeinsamkeiten und Unterschiede haben Prozesse und Threads? 

6. Schreiben Sie ein C-Programm, das einen Vater- und einen Sohnprozess 
startet. Vater und Sohn durchlaufen jeweils eine Schleife bis 1000, wobei 
der Vater die geraden und der Sohn die ungeraden Zahlen ausgibt. Ist der 
Sohnprozess fertig, beendet er sich sofort. Der Vaterprozess wartet mit dem 
Beenden auf das Ende des Sohnprozesses. 

7. Schreiben Sie ein Programm, das zwei Threads startet. Beide Threads ge
ben pro Sekunde ihren eindeutigen Namen plus jeweils eine eigene fortlau
fende Zahl aus. Stellen Sie sicher, dass die Ausgabe von einem Thread 
immer vollständig erfolgt, d. h. die Ausgaben von beiden Threads nicht gemischt werden.


8. Was ist eine race condition? Was ist eine critical section? 

9. Erläutern Sie den Systemaufruf result = sigaction(sig, act, oact)! 

10. Was ist ein mount point? In welchen beiden System Kommandos wird dieser benötigt? Erläutern Sie kurz die Aufgaben dieser beiden Kommandos! 

11. Schreiben Sie ein C Programm, das 2 Kommandozeilenparameter erhält. 
Mit dem ersten Parameter wird ein neues Verzeichnis mit dem Parameter 
als Namen angelegt. Der zweite Parameter wird als Namen für einen zu erstellenden Link verwendet. Der Link zeigt auf das gerade erstellte Verzeichnis. Die Art des Links kann selbst gewählt werden. 

12. Schreiben Sie ein C Programm, das aus einer Datei das 10. Zeichen ausliest, 
ohne die vorherigen Zeichen zu lesen. Der Dateiname wird als Kommandozeilenparameter übergeben. Das gelesene Zeichen soll als Dezimalzahl auf 
der Standardausgabe ausgegeben werden. Die Datei wird danach geschlossen und das Programm beendet sich. Enthält die Datei keine 10 Zeichen, 
wird eine Fehlermeldung ausgegeben. 
