### Erläutern Sie die Aufgabe des Systemaufrufs und dessen Parameter int result = execlp(const char *file, const char *arg, ...);

execlp ersetzt den aktuell laufenden durch einen neuen Prozess.

Der Name dieses Programms wird im ersten Parameter, const char *file, übergeben. Das benannte Programm wird daraufhin in $PATH gesucht.

Die weiteren Parameter, const char* arg, ... sind Parameter, die dem aufzurufenden Programm übergeben werden.

Sollte es bei der ausführung von execlp zu einem Fehler kommen, so wird der Fehlercode -1 in der Variable "int result" gespeichert.

Ist der Aufruf hingegen erfolgreich, so wird result nicht beschrieben, da das Programm nie an diese Stelle zurückkehrt.
