6. Schreiben Sie ein C-Programm, das einen Vater- und einen Sohnprozess startet. Vater und Sohn erzeugen jeweils exakt 42 Ausgaben,\ 
wobei der Vater gerade und der Sohn durch 3 teilbare Zahlen ausgibt. Die erste Zahl soll bei beiden die 0 sein.\
Der Vaterprozess erzeugt seine Ausgabe erst nach dem Ende des Sohnprozesses.

[Lösungsvorschlag](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/father_son_42.c)

7. Schreiben Sie ein Programm, das zwei Threads startet. Beide Threads geben endlos einmal pro Sekunde ihren betriebssystemweit eindeutigen\ 
Namen und einen gemeinsamen Zähler aus. Ausgabe und Inkrementieren des Zählers sollen dabei in verschiedenen Programmteilen erfolgen,\
mit dem Aufruf der Wartefunktion in der Mitte. Stellen Sie sicher, dass die Ausgabe zusammenhängend erfolgt.

[Lösungsvorschlag](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/kw7_a7.c)

8. Was ist eine race condition? Was ist eine critical section?

[Löungsvorschlag](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/texte/kw7_a8.md)

9. Erläutern Sie die Aufgabe des Systemaufrufs und dessen Parameter int result = execlp(const char *file, const char *arg, ...);

[Löungsvorschlag](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/texte/kw7_a9.md)

10. Was ist ein mount point? In welchen beiden Systemkommandos wird dieser benötigt? Erläutern Sie kurz die Aufgaben dieser beiden Kommandos.

[Lösungsvorschlag](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/texte/kw7_a10.md)

11. Schreiben Sie ein C-Programm, das beliebig viele Kommandozeilenparameter erhalten kann. Es soll seinen eigenen Namen und die Anzahl der\ 
Kommandozeilenparameter ausgeben. Existieren Parameter, sollen diese zusammen mit einer fortlaufenden, bei 1 beginnenden Nummer jeweils in einer eigenen Zeile ausgegeben werden.

12. Schreiben Sie ein C-Programm, das dieselbe Funktion wie in Aufgabe 3 beschrieben realisiert! Nennen Sie den Aufruf des gcc zum vollständigen Bauen\
des ausführbaren Programms! Die ausführbare Datei soll myquestion heißen.
