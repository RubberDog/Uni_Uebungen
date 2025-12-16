1. Schreiben Sie ein Shell-Script mit dem Namen "myquestion". Dieses Script hat als Parameter den Text einer Frage, die mit Ja oder Nein beantwortet werden kann. Antwortet der Benutzer mit Ja, so liefert das Script den Rückgabewert 0, bei Nein wird 1 geliefert, andernfalls erscheint die Frage noch einmal.

[Link zur Lösung](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/Shell/kap3_1-myquestion.sh)

2. Erstellen Sie ein Shell-Script "mydelete", das als Parameter eine Liuste von Dateien hat. Diese Dateien sollen nun gelöscht werden. Das Shell-Script fragt aber für jede Datei, ob sie wirklich gelöscht werden soll. Nut bei der Antwort ja wird sie gelöscht. Hinweis: Sie sollen hier das Script myquestion aufrufen.

[Link zur Lösung](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/Shell/kap3_2-mydelete.sh)

3. Schreiben Sie ein Shell-Script chatsituation, das für einen Chatroom jede Minute ausgibt, wie sich die Anmeldesituation verändert hat und wie viele Personen sich im Raum befinden. Nehmen Sie an, alle, die sich auf unserem UNIX-Rechner befinden, sind in diesem Chat-Room. Tipp: who benutzen.

[Link zur Lösung](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/Shell/kap3_3-chatsituation.sh)

4. Schreiben Sie ein Shell-Script, mit dem Sie eine Datei löschen können. Die zu löschende Datei soll als Parameter beim Aufruf mitgegeben werden. Legen Sie noch ein zweites Script an, in dem Sie fragen, ob die Datei wirklich gelöscht werden soll. Diese Übung soll ihnen unter anderem zeigen, wie Scripte untereinander aufgerufen werden. 

Ist das gleiche wie Aufgabe2?!

5. Schreiben Sie ein Shell-Script, das die ersten n Files eines Ordners löscht. Das Verzeichnis und die Anzahl der zu löschenden Dateien sollen als Paramter beim Aufrufen angegeben werden.

[Link zur Lösung](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/Shell/kap3_5-n-delete.sh)

6. Schreiben Sie ein Programm, das Daten aus einem Verzeichnis von einer FTP-Adresse in ein angegebenes Verzeichnis laden kann. Sie können die Variablen als Paramter bei der Eingabe übergeben oder fest im Script eintragen. Nutzen Sie zur Übertragung mget.

Nö.

7. Schreiben Sie ein Script, das mit Traps arbeitet. Nach dem Starten soll immer ein eigenes Prompt angezeigt werden, das alle Eingaben entgegennimmt, aber nicht ans System weiterleitet. Wenn der Benutzer "stop" oder "Stop" eingibt, soll das Programm beendet werden. Wird Strg + c oder Strg + z oder Strg + \ eingegeben wird das Programm nicht beendet, es wird lediglich eine Meldung ausgegeben.

[Link zur Lösung](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/Shell/kap3_7-fakeshell.sh)

8. Schreiben Sie ein Script, das sich die Systemzeit holt, sich aus dieser die aktuelle Stunde holt und eine entsprechende Meldung ausgibt. Von 9.00 bis 11.00 Uhr wird "Guten Morgen" ausgegeben, um 12:00 Uhr "Mahlzeit", von 13:00 bis 17:00 Uhr "Zeit für eine Pause" und bei allem anderen "Schönen Abend und süße Träume". Geben Sie die Meldungen in einem Intervall aus, dass Sie sich aussuchen können.

[Link zur Lösung](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/Shell/kap3_8-timer.sh)

9. Schreiben Sie ein Script, das die root-Partition nach Dateien durchsucht, die in den letzten x Tagen geändert wurden und eine Größe von y Blöcken haben (512 byte pro Block). Die Angaben sollen beim Programmaufruf mit übergeben werden.

 [Link zur Lösung](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/Shell/kap3_9-finder.sh)

10. Schreiben Sie ein Script "doku", das Ihnen wesentliche Konfigurationsdateien des Unix-Systems formatiert mit pr (zum Druck) ausgibt. Darunter fallen z.B.:
```
/etc/defaultrouter (Solaris)
/etc/fstab
/etc/hosts
/etc/inetd.conf
/etc/nsswitch.conf
/etc/passwd
/etc/resolv.conf
```
Der Initialbuchstabe soll als Optionskennzeichen dienen. So erzeugt der Aufruf doku -dfhinpr die Auflistung aller genannten Konfigurationsdateien. Bei Angabe der Option -h oder einer nichtspezifizierten Option erfolgt eine Usage-Ausgabe mit detaillierter Hilfestellung zur Benutzung des Scripts. Hierzu setzen Sie (analog zum Script apachctl) das Konzept des Here-Dokuments ein, um die auszugebenden Teste mit in das Script zu integrieren.

Aufgabe doof. `-h` soll die Hilfe zeigen, aber auch die `/etc/hosts` ausgeben... 
