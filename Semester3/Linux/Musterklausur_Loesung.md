## Teil A

### 1. Skizzieren Sie das UNIX Schichtenmodell! Kennzeichnen und benennen Sie 
die drei Schnittstellen zum Betriebssystem. 

Anwendungen
^       ^
Systemprogramme/Shell
^       ^
 Kernel
^       ^
Hardware

Schnittstellen; 

Hardware <> Kernel (HAL -> Hardware Abstraction Layer)
Kernel <> Systemprogramme/Shell (SCI -> System Call Interface)
Shell <> Anwendungen (User Command Interface)

### 2. Nennen Sie fünf typische Verzeichnisse direkt aus dem UNIX Root Verzeich
nis oder aus Unterverzeichnissen und deren typischen Inhalt bzw. Aufgabe!  

/etc/ - Systemweite Konfigurationsdateien, z.b. /etc/passwd
/home/ - Home-Verzeichnisse der Nutzer, Nutzerdaten
/var/ - sich ständig ändernde Dateien, logfiles (/var/log/), webserver-dateien (/var/www/)
/bin/ - Systemweite binaries, ls / cp / mv
/dev/ - Gerätedateien, Zugriffspunkte für Hardware

### 3. Schreiben Sie ein Shell-Script mit dem Namen myquestion. Dieses Script 
erhält als Parameter den Text einer Frage, die mit ‚Ja‘ oder ‚Nein‘ beantwortet werden kann. Antwortet der Benutzer mit Ja, so liefert das Script den 
Rückgabewert 0, bei Nein wird 1 geliefert, andernfalls erscheint die Frage 
noch einmal. 

### 4. Schreiben Sie ein Shell-Script, mit dem Sie eine Datei löschen können. Die 
zu löschende Datei soll als Parameter beim Aufruf mitgegeben werden. Vor 
dem Löschen soll nachgefragt werden, ob die Datei tatsächlich gelöscht 
werden soll. Rufen Sie dazu das oben erstellte Skript auf und verwenden 
dessen Rückgabewert als Entscheidung für das Löschen/Nicht-Löschen. 

## Teil B: 
### 5. Welche Gemeinsamkeiten und Unterschiede haben Prozesse und Threads? 

Speicher / Ressourcen
- Prozesse haben eigene Speicherbereiche und zugeteilte Ressourcen
- Threads sind Teil eines Prozesses und teilen sich den Adressraum und ressourcen

Kommunikation
- Interprozesskommunikation über (Named) Pipes, sockets, shared memory
- Threads haben gemeinsamen Speicher, daher einfache Kommunikation; Gefahr -> Race Conditions

Erzeugung / Kosten
- Prozess; fork() ist teuer, genauso der Kontextwechsel zwischen Prozessen
- Erzeugung und wechsel bei Threads ist performanter


### 6. Schreiben Sie ein C-Programm, das einen Vater- und einen Sohnprozess 
startet. Vater und Sohn durchlaufen jeweils eine Schleife bis 1000, wobei 
der Vater die geraden und der Sohn die ungeraden Zahlen ausgibt. Ist der 
Sohnprozess fertig, beendet er sich sofort. Der Vaterprozess wartet mit dem 
Beenden auf das Ende des Sohnprozesses. 

```
pid_t = pid
```

### 7. Schreiben Sie ein Programm, das zwei Threads startet. Beide Threads ge
ben pro Sekunde ihren eindeutigen Namen plus jeweils eine eigene fortlau
fende Zahl aus. Stellen Sie sicher, dass die Ausgabe von einem Thread 
immer vollständig erfolgt, d. h. die Ausgaben von beiden Threads nicht ge
mischt werden. 

###  8. Was ist eine race condition? Was ist eine critical section? 

Eine critical Section ist ein Codebereich, in dem mehrere Prozesse / Threads auf gemeinsame Ressourcen wie Dateien / Speicher / Variablen zugreifen sollen, 
diese den Bereich aber nicht gleichzeitig betreten dürfen um Race Conditions zu verhindern.
Race Conditions kommen zustande, wenn der zugriff auf solch geteilte Ressourcen nicht geschützt ( gegenseitig blockiert ) wird. 
Der Zustand / Inhalt einer Variablen / Datei / des Speichers kann nicht sicher bestimmt werden und ist abhängig vom exakten Zeitpunkt der Ausführung. Das Programm verhält sich zufällig / inkonsistent / fehlerhaft.
 
## Teil C: 
### 9. Erläutern Sie den Systemaufruf result = sigaction(sig, act, oact)! 

### 10. Was ist ein mount point? In welchen beiden System Kommandos wird dieser benötigt? Erläutern Sie kurz die Aufgaben dieser beiden Kommandos! 

Ein Mount Point ist ein Verzeichnis im UNIX-System, in das eine Festplatte / ein USB-Stick o.ä. eingehängt wird, um sie dem System zur Verfügung zu stellen.
Benötigt wird er für die Kommandos `mount` und `umount` um sie einzuhängen und somit les- und beschreibbar zu machen, oder um sie wieder auszuhängen und somit dem System zu entziehen.

### 11. Schreiben Sie ein C Programm, das 2 Kommandozeilenparameter erhält. 
Mit dem ersten Parameter wird ein neues Verzeichnis mit dem Parameter 
als Namen angelegt. Der zweite Parameter wird als Namen für einen zu er
stellenden Link verwendet. Der Link zeigt auf das gerade erstellte Verzeich
nis. Die Art des Links kann selbst gewählt werden. 

### 12. Schreiben Sie ein C Programm, das aus einer Datei das 10. Zeichen ausliest, 
ohne die vorherigen Zeichen zu lesen. Der Dateiname wird als Kommandozeilenparameter übergeben. Das gelesene Zeichen soll als Dezimalzahl auf 
der Standardausgabe ausgegeben werden. Die Datei wird danach geschlossen und das Programm beendet sich. Enthält die Datei keine 10 Zeichen, 
wird eine Fehlermeldung ausgegeben.
