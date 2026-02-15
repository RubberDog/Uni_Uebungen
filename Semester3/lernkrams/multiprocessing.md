## Aufgabe 1: Vater erst nach Sohn, aber mit Exit-Status-Übergabe

Schreiben Sie ein C-Programm mit Vater- und Sohnprozess.

Anforderungen

Der Sohn berechnet die Summe aller Zahlen von 1 bis N, wobei N als Kommandozeilenparameter übergeben wird.

Der Sohn gibt nur die Endsumme aus und beendet sich.

Der Vater wartet auf den Sohn und gibt danach aus:

die PID von Vater und Sohn,

ob der Sohn normal beendet wurde,

und den Exit-Code des Sohns.

Hinweis: Da Exit-Codes nur 0–255 sind, muss der Sohn den Exit-Code sinnvoll setzen (z. B. sum % 256) und die echte Summe normal ausgeben.


## Aufgabe 2: Mini-“exec” mit Kindprozess und Exit-Auswertung

Schreiben Sie ein C-Programm, das einen Kindprozess startet und darin ein externes Programm ausführt.

Anforderungen

Aufruf: ./runner <programm> [args...]

Beispiel: ./runner /bin/ls -l /tmp

Der Kindprozess führt das Programm mit Argumenten über execlp(), execvp() oder execv() aus.

Wenn exec fehlschlägt: Kind gibt Fehlermeldung via perror() aus und beendet sich mit Code 127.

Der Vaterprozess wartet und gibt aus:

ob das Kind normal beendet wurde oder durch Signal,

den Exit-Code oder das Signal.

Zusatz: Der Vater soll vor dem Warten “Starte …” ausgeben und danach “Fertig”.
