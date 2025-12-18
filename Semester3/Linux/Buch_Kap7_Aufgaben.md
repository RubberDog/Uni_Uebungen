### 1 

Was ist so besonders daran, dass beinahe "alles" ( auch Named Pipes, UNIX Sockets, Peripheriegeräte (bzw. deren Treiber), Shared Memory-Segemente...) in UNIX eine Datei ist? Wobei macht man sich das zu Nutze?

### 2

Stellen Sie sich vor, jeder Benutzer eines UNIX-Systems hääte in seinem Home-Verzeichnis ein Verzeichnis namens `public`, in dem jeder User beliebige Inhalte veröffentlichen kann.<br>
Diese Inhalte möchten Sie nun jedem Nutzer des Systems zur Verfügung stellen. Allerdings sind Sie berechtigterweise vorsichtig und haben Bedenken dabei, dass dann auch jeder Nutzer den Inhalt Ihres Home-Verzeichnisses einsehen könnte.<br>
Wie könnten Sie mithilfe der UNIX-Dateirechte realisieren, dass alle Benutzer zwar den Inhalt des Verzeichnisses `public`einsehen und auch alle darin befindlichen Dateien lesen (und ggfs. ausführen) können, den Inhalt des darüber liegenden Verzeichnisses jedoch nicht?

### 3 

Wie Sie wissen, ist sämtliche Hardware des Rechners durch einen Eintrag (in Form einer Datei) im Verzeichnis /dev repräsentiert. Wie würden Sie beispielsweise auf das (erste) CD-ROM-Laufwerk zugreifen?

### 4

Schreiben Sie ein interaktives C-Programm, das eine Datei öffnet und auszuwählen erlaubt, in welchem Modus die Datei geöffnet wird (Modus `r`, `w`, `a`, `r+`, `w+`, `a+`).<br>
Weitere Wahlmöglichkeiten sollen Lese- und Schreiboperationen sowie Positionieren mit detaillierter Fehlerbehandlung sein. Zeigen Sie den Dateiinhalt und die Systemreaktion, also Erfolgs- oder Fehlermelungen, nach jeder Kommandoausführung an. <br>
Probieren Sie die möglichen und unmöglichen Kombinationen aus Öffnungs- und Zugriffsmodi und verfolgen Sie das Resultat.

## hier kommt vielleicht noch mehr, aber eher nich
