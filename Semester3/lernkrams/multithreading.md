# pthread Übungsaufgaben (Grundlagen)

Diese Aufgaben dienen **reiner Übung**. Kein neuer Stoff, keine Eskalation. Ziel ist **Automatisierung** typischer pthread-Handgriffe.

---

## Übung 1 – Zwei Threads, ein Zähler (Warm-up)

Schreiben Sie ein Programm, das:

* einen globalen `int counter` verwendet
* zwei Threads startet
* jeder Thread:

  * einmal pro Sekunde
  * seinen eindeutigen Namen (`Thread A` / `Thread B`)
  * und den aktuellen Zählerstand ausgibt
  * danach den Zähler um 1 erhöht
* sicherstellt, dass die Ausgabe **nicht gemischt** wird

Hinweise:

* `pthread_mutex_t` verwenden
* `pthread_mutex_init(&mutex, NULL)`
* Mutex **vor** der Ausgabe sperren, **danach** freigeben
* Hauptthread wartet mit `pthread_join(thread, NULL)`

[Lösungsvorschlag](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/mt_a1.c)

---

## Übung 2 – Drei Threads, unterschiedliche Intervalle

Schreiben Sie ein Programm, das:

* **drei Threads** startet
* jeder Thread:

  * einen eigenen Namen besitzt
  * eine eigene lokale Zählvariable verwendet
  * in einem eigenen Zeitintervall läuft:

    * Thread 1: jede Sekunde
    * Thread 2: alle 2 Sekunden
    * Thread 3: alle 3 Sekunden
* jeder Thread gibt aus:

  ```
  [Name] Durchlauf: X
  ```
* Ausgaben dürfen **nicht ineinanderlaufen**

Ziel:

* wiederholtes Schreiben von `pthread_create`, `pthread_join` und `pthread_mutex_*`

[Lösungsvorschlag](https://github.com/RubberDog/Uni_Uebungen/blob/main/Semester3/Linux/C/mt_a2.c)

---


## Übung 3 – Hauptthread wartet sauber

Schreiben Sie ein Programm, das:

* zwei Threads startet
* jeder Thread gibt **10 Zeilen** aus (Name + fortlaufende Nummer)
* **erst nachdem beide Threads beendet sind**, gibt der Hauptthread aus:

  ```
  Alle Threads beendet.
  ```
* keine `sleep()`-Aufrufe im Hauptthread
* Synchronisation ausschließlich mit `pthread_join`

---

## Übung 4 – Mutex explizit zerstören

Schreiben Sie ein Programm, das:

* zwei Threads startet
* einen Mutex verwendet, um die Ausgabe zu schützen
* nachdem beide Threads beendet sind:

  * `pthread_mutex_destroy()` aufruft
* danach sauber beendet wird

Ziel:

* Einprägen von **Initialisierung und Aufräumen** von Synchronisationsobjekten

---

## Übung 5 – Thread-ID als Argument

Schreiben Sie ein Programm, das:

* ein Array mit zwei `pthread_t` verwendet
* jedem Thread beim Start eine **eindeutige ID (int)** übergibt
* jeder Thread gibt aus:

  ```
  Thread <ID>: Schritt <N>
  ```
* Ausgabe ist synchronisiert
* keine globalen Thread-IDs verwendet werden

Hinweis:

* Hier wird das **Adressieren (`&`) beim Argument** benötigt
* **nicht** beim `pthread_join`

---

### Hinweis zum Arbeiten

* 1–2 Aufgaben bearbeiten, dann Pause
* Ziel ist **Muscle Memory**, nicht Eleganz
* Kompilieren, Fehler sehen, korrigieren, wiederholen

---

Viel Erfolg. Keine Abkürzungen.
