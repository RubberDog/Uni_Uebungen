Race Condition:

Eine Race Condition bezeichnet einen Zustand, in dem mehrere Prozesse oder Threads auf geteilte Ressourcen zugreifen und das Ergebnis vom zeitlichen Ablauf der Ausführung der aufrufenden Prozesse / Threads abhängt.


Critical Section:

Eine Critical Section ist ein Code-Bereich, in welchem der Zugriff auf gemeinsam genutzte Ressourcen stattfindet. Um Race Conditions zu vermeiden, sollte eine critical section durch Mutex / Semaphore das zeitgleiche betreten durch mehrere Prozesse / Threads verhindern.
