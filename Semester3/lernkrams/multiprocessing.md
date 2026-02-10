## Aufgabe 1: Vater/Sohn mit sauberer Synchronisation (abwechselnde Ausgabe)

Schreiben Sie ein C-Programm, das einen Vater- und einen Sohnprozess startet.

Anforderungen

Beide Prozesse geben Zahlen von 0 bis 200 aus.

Vater gibt nur Zahlen aus, die durch 4 teilbar sind.

Sohn gibt nur Zahlen aus, die durch 6 teilbar sind.

Zahlen, die beide Kriterien erfüllen (z. B. 0, 12, 24, …), dürfen nur einmal ausgegeben werden (Sie dürfen wählen: Vater oder Sohn).

Die Ausgabe soll streng aufsteigend erfolgen (keine “zufällige” Reihenfolge durch Scheduling).

Nutzen Sie zur Synchronisation Pipes oder Signale (Busy Waiting ist nicht erlaubt).

Am Ende: Vater wartet auf Sohn (wait/waitpid) und beendet sich dann.

## Aufgabe 2: Vater erst nach Sohn, aber mit Exit-Status-Übergabe

Schreiben Sie ein C-Programm mit Vater- und Sohnprozess.

Anforderungen

Der Sohn berechnet die Summe aller Zahlen von 1 bis N, wobei N als Kommandozeilenparameter übergeben wird.

Der Sohn gibt nur die Endsumme aus und beendet sich.

Der Vater wartet auf den Sohn und gibt danach aus:

die PID von Vater und Sohn,

ob der Sohn normal beendet wurde,

und den Exit-Code des Sohns.

Hinweis: Da Exit-Codes nur 0–255 sind, muss der Sohn den Exit-Code sinnvoll setzen (z. B. sum % 256) und die echte Summe normal ausgeben.

## Aufgabe 3: Kommandozeilenparameter + Validierung + Sortierung (ohne qsort erlaubt)

Schreiben Sie ein C-Programm, das beliebig viele Kommandozeilenparameter erhält.

Anforderungen

Erwartet werden Ganzzahlen als Parameter (z. B. ./prog 10 -4 7 7 2).

Das Programm gibt aus:

eigenen Namen,

Anzahl der Parameter,

alle gültigen Zahlen,

alle ungültigen Parameter (z. B. 12x, --5, leere Strings) in einer separaten Liste.

Die gültigen Zahlen sollen aufsteigend sortiert ausgegeben werden.

Sortieren ohne qsort() (z. B. Bubble/Insertion/Selection).

Extra: Doppelte Zahlen dürfen mehrfach stehen bleiben (kein Set nötig).

## Aufgabe 4: Verzeichnis + Link + Prüfung (stat/lstat)

Schreiben Sie ein C-Programm, das genau 2 Kommandozeilenparameter erhält.

Anforderungen

Parameter 1: Name eines neuen Verzeichnisses (z. B. mydir)

Parameter 2: Name eines Links (z. B. mylink)

Programmverhalten:

Lege das Verzeichnis an (mit sinnvollen Rechten, z. B. 0755).

Erzeuge einen Link, der auf dieses Verzeichnis zeigt (symbolisch oder hart – Sie wählen).

Prüfe danach mit lstat() und stat():

welche Art von Datei der Link ist,

und worauf er zeigt.

Gib eine kurze Zusammenfassung aus (z. B. “symbolischer Link”, “zeigt auf Verzeichnis …”).

Fehlerbehandlung: Existiert bereits etwas mit gleichem Namen → saubere Fehlermeldung und Exit-Code ≠ 0.

## Aufgabe 5: Mini-“exec” mit Kindprozess und Exit-Auswertung

Schreiben Sie ein C-Programm, das einen Kindprozess startet und darin ein externes Programm ausführt.

Anforderungen

Aufruf: ./runner <programm> [args...]

Beispiel: ./runner /bin/ls -l /tmp

Der Kindprozess führt das Programm mit Argumenten über execvp() (oder execv()) aus.

Wenn exec fehlschlägt: Kind gibt Fehlermeldung via perror() aus und beendet sich mit Code 127.

Der Vaterprozess wartet und gibt aus:

ob das Kind normal beendet wurde oder durch Signal,

den Exit-Code oder das Signal.

Zusatz: Der Vater soll vor dem Warten “Starte …” ausgeben und danach “Fertig”.
