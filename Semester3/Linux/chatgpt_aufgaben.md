🧩 A. Multiprocessing – Vater & Kind(er)

🧠 Aufgabe 1 – Vater & Sohn

Schreibe ein Programm, das:

einen Kindprozess startet (fork()),

der Vaterprozess alle geraden Zahlen bis 1000,
der Sohn alle ungeraden Zahlen bis 1000 ausgibt,

der Vater wartet, bis der Sohn beendet ist.

[Link zum Code](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/gpt_A1__f_a_s.c)

---------------------------

⚙️ Aufgabe 2 – Zwei Kinder

Schreibe ein Programm, das:

zwei Kindprozesse startet,

Kind 1 gibt „Ich bin Kind 1“ zehnmal aus (mit sleep(1)),

Kind 2 gibt „Ich bin Kind 2“ zehnmal aus (mit sleep(2)),

der Vaterprozess wartet, bis beide Kinder beendet sind,
und gibt dann „Alle Kinder beendet“ aus.

→ Ziel: Du lernst wait() mehrfach zu nutzen (oder waitpid()).

[Link zum Code](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/gpt_A2__two_sons.c)

---------------------------

💬 Aufgabe 3 – Kind mit Rückgabewert

Der Sohnprozess rechnet die Summe von 1 + 2 + 3 + ... + 100.

Er beendet sich mit exit(sum % 255) → da nur 1 Byte übertragen wird.

Der Vater ruft wait(&status) auf und liest den Exit-Code mit WEXITSTATUS(status).

Gib im Vaterprozess die empfangene Summe aus.

→ Ziel: Kommunikation Vater ↔ Kind über Exit-Status.

[Link zum Code](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/gpt_A3__exit_comms.c)

---------------------------

🧮 Aufgabe 4 – Kommunikation über Pipe

Erzeuge eine Pipe (pipe(fd)).

Vaterprozess schreibt Text in die Pipe (z. B. „Hallo Sohn“).

Kindprozess liest aus der Pipe und gibt den Text aus.

→ Ziel: Grundlagen der Interprozesskommunikation (IPC).

(Wenn du magst, kann ich dir hier später zeigen, wie du eine „Pipe mit zwei Richtungen“ machst — also Vater ↔ Sohn beidseitig.)

[Link zum Code](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/gpt_A4__pipe_comms.c)

---------------------------

💻 Aufgabe 5 – exec()

Der Vaterprozess startet ein Kind.

Das Kind ersetzt sich selbst mit einem anderen Programm über execlp(), z. B.:

execlp("ls", "ls", "-l", NULL);


Der Vater wartet, bis ls beendet ist, und schreibt danach:
"ls ist fertig".

→ Ziel: Verständnis für fork() + exec()-Kombination.

---------------------------

---------------------------

🧩 B. Multithreading – pthreads

🧠 Aufgabe 1 – Zwei Threads

Erstelle zwei Threads mit pthread_create().

Jeder Thread soll 10-mal seinen Namen und eine fortlaufende Zahl ausgeben.

Verwende sleep(1), damit man die Ausgaben sieht.

Verwende eine Mutex, damit keine Zeilen durcheinander geraten.

→ Ziel: Grundstruktur von Threads + Synchronisation.

[Link zum Code](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/gpt_B1__two_threads.c)

---------------------------

🔢 Aufgabe 2 – Gemeinsamer Zähler (Race Condition)

Eine globale Variable int counter = 0;

Zwei Threads erhöhen den Counter je 1000000-mal.

Gib am Ende den Wert von counter aus.

Vergleiche Ergebnis mit und ohne pthread_mutex_lock().

→ Ziel: Race Condition verstehen.

[Link zum Code](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/gpt_B2__race_condition.c)

---------------------------

⚙️ Aufgabe 3 – Threads mit Argumenten

Erzeuge 3 Threads.

Jeder bekommt eine unterschiedliche Startzahl übergeben (z. B. 10, 20, 30).

Jeder Thread zählt von seiner Startzahl 5 Schritte hoch und druckt die Werte.

Verwende einen struct, um Parameter zu übergeben.

→ Ziel: Arbeiten mit Argumenten (void* arg).

---------------------------

💬 Aufgabe 4 – Thread-Synchronisation mit join

Erzeuge zwei Threads.

Thread 1 zählt bis 5, Thread 2 soll erst starten, wenn Thread 1 fertig ist.

Nutze pthread_join() für die Synchronisation.

→ Ziel: Thread-Abhängigkeiten und kontrollierte Reihenfolge.

[Link zum Code](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/gpt_B4__thread_sync.c)

---------------------------

🧩 Aufgabe 5 – Thread mit Rückgabewert

Ein Thread berechnet die Summe von 1 bis N.

Übergib N als Parameter.

Der Thread gibt die Summe über pthread_exit((void*)sum) zurück.

Im Hauptthread: pthread_join(t, (void**)&result) → Ergebnis ausgeben.

→ Ziel: Rückgabewerte von Threads.

---------------------------

💡 Aufgabe 6 (optional) – Producer/Consumer mit Mutex + Condition

Ein Thread erzeugt Zahlen (Producer).

Ein anderer verbraucht sie (Consumer).

Synchronisation über pthread_cond_wait() und pthread_cond_signal().

→ Ziel: Komplexere Thread-Koordination (echtes Synchronisationsproblem).
