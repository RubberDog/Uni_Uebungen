### Was ist eine Race Condition? Was ist eine critical section?

Eine Race-Condition beschreibt den Zustand eines Programmes, wenn Ressourcen, die von mehreren Threads oder Prozessen genutzt werden,
nicht gegen den zeitgleichen Zugriff gesichert sind. Dadurch ist das Ergebnis der Zugriffe nicht-deterministisch und abhängig vom exakten Zugriffszeitpunkt.

Eine critical section bezeichnet einen Code-Abschnitt, in welchem von mehreren Threads / Prozessen auf gemeinsam genutzte Ressourcen zugegriffen werden soll. Dieser Abschnitt muss gegen zeitgleiches betreten abgesichert werden.
