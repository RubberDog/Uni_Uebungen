Ressourcen:
- Prozesse haben eigene, zugeteilte Systemressourcen und sind daher isoliert vom erzeugenden Prozess
- Threads sind Teil eines Prozesses und teilen sich die Ressourcen mit dem erzeugenden Prozess

IPC:
- Kommunikations über Pipes, Named Pipes, shared memory
- Threads teilen sich den Speicherbereich, daher direkter Zugriff - Gefahr race conditions

Kosten:
- Prozesse sind teurer, sowohl bei der Erzeugung wegen Ressourcenbedarf, als auch beim Kontextwechsel durch CPU
- Erzeugung von und Wechsel zu Threads ist performanter

Lebensdauer:
- Kind-Prozesse können auch nach beenden des Vaterprozesses weiterlaufen
- Threads können nach beenden des erzeugenden Prozesses nicht mehr existieren, da sie Teil davon sind
