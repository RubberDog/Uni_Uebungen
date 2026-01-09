1. Schreiben Sie ein C-Programm,. das einen Vater und einen Sohnprozess startet. Vater und Sohn durchlaufen jeweils eine Schleife bis 20.000, wobei der Vater die gerade und der Sohn die ungeraden Zahlen ausgibt. Schauen Sie sich mit ps an, welche Prozesse entstehen und wie sie zusammenhängen.

[Link zur Lösung](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/father_and_son.c)

2. Schreiben Sie einen eigenen kleinen Kommandointerpreter, so wie im Beispiel dieses Kapitels. Experimentieren Sie mit dem Programm, indem Sie Versionen testen, in denen wait und exit fehlen.

3. Schreiben Sie ein C-Programm, das eine Pipe realisiert. Ein Sohnprozess soll EU-Beträge in die Pipe schreiben, ein anderer Sohnprozess soll die EU-Beträge mit 16% Umsatzsteuer versehen und diese Ausgeben.

[Link zum Code](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/kap4_3_euro-pipe.c)

4. Realisieren Sie Übung 3 mit einer Named Pipe. Hinweis: Schauen Sie sich die Systemaufrufe read und write im UNIX-Manual an.

5. Diese Übung widmet sich shared Memory. Schreiben Sie zwei Programm mit den Namen ausgabe.c und aendern.c. Diese Programme sollen ein Shared Memory-Segment benutzen, das ein Zeichen (char) eine eine Zahl (integer) enthält. ausgabe.c gibt das Zeichen so oft aus, wie die Zahl angibt. Das Programm aendern.c liest einen char und einen int aus der Kommandozeile und schreibt beides in Shared Memory.
Hinweise: Schauen Sie sich an, wie man Argumente aus der Kommandozeile bearbeitet (*argv[]). Realisieren Sie Shared Memory als struct, vielleicht so:
 ```
strunct inhalt {
    char zeichen;
    int zahl;
};
 ```
Fügen Sie in das Programm ausgabe.c den Befehle sleep(5) ein, so dass fünf Sekunden zwischen Ausgaben gewartet wird.

6. Führen Sie die beiden Programme ausgabe und aendern aus Übung5 aus. Am besten starten Sie das Programm ausgabe als Hintergrundprozess: ausgabe &. Starten Sie dann aendern im Vordergrund. Welche Beobachtungen machen Sie? Wie nennt sich die Situation?
