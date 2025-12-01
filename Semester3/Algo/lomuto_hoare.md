## Unterschiede der beiden (bekanntesten) QuickSort-Verfahren

Für beide ausgehend von einem unsortieren Array der Länge n

Wichtig: Einfach nur "alles kleiner Pivot nach links, alles größer Pivot nach rechts" ist NICHT Quicksort!

### Hoare

Bestimmungsart des Pivot-Elementes ist egal.

Wir haben zwei Zeiger, i und j.

i beginnt am Anfang des Array (Array[0]) und fährt nach rechts. Es stoppt beim ersten Element das größer ODER gleich dem Pivot ist. 

Wenn wir - wie in der Aufgabe - immer das erste Element des Array als Pivot nehmen, stoppt i bereits hier!

Danach läuft j los - es startet am Ende des Array (Array[n]) und fährt nach links. j stoppt, wenn es ein Element kleiner ODER gleich Pivot findet.

Die beiden Elemente werden getauscht.

Danach läuft i wieder weiter bis zu einem Element >= Pivot. danach wieder j bis <= Pivot, und so weiter.

Der Durchlauf endet, wenn beide Zeiger auf das gleiche Element zeigen - dieser Durchlauf ist dann fertig, Quicksort wird rekursiv auf den linken- und rechten Teil aufgerufen.

### Lomuto

"Standard"-Lomuto wählt für Pivot immer das letzte Element. Mit einer minimalen Änderung ist es auch mit dem ersten Element oder Median of three möglich.

Für Median of three tauscht man als erstes das gewählte Element mit dem letzten des Array, nutzt man das erste Element gibt es am Ende eine kleine Änderung.

Dann werden zwei Zeiger i und j genutzt. Beide starten vorn - im Normalfall auf Array[0] für i, Array[1] für j. Nutzt man das erste Element als Pivot, starten beide je 1 Element weiter.

i bleibt an seiner Position, j läuft nach rechts und vergleicht, ob das aktuelle Element < i ist. Wenn ja, tauschen beide.

i wird dann eine Position weiter gesetzt, j läuft ab seiner letzten Position weiter.

Beim normalen Lomuto, wenn das letzte Element Pivot ist, wird dieses dann mit der Position i + 1 vertauscht. In unserer Aufgabe, wenn Pivot das erste Element ist, wird es mit der Position i - 1 vertauscht. 
Dadurch ist sichergestellt, dass alles < Pivot links davon, alles > Pivot rechts davon ist.

Danach rekursiv weiter auf beiden Teilen.

