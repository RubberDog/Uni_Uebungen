#!/bin/bash

# Prüfen, ob Frage übergeben wurde
if [ $# -eq 0 ]; then
	echo "Fehler: Bitte eine Frage als Parameter übergeben."
	echo "Beispiel: ./myquestion \"Fortfahren?\""
	exit 2
fi

# Die Frage aus den Parametern zusammensetzen
frage="$*"

while true; do
	read -p "$frage (Ja/Nein): " antwort

	# Eingabe in lowercaser umwandeln
	antwort=$(echo "$antwort" | tr '[:upper:]' '[:lower:]')

	# Antwort auswerten
	
	case "$antwort" in
		ja|j)
			exit 0
			;;
		nein|n)
			exit 1
			;;
		*)
			echo "Bitte mit 'Ja' oder 'Nein' antworten."
			;;
	esac
done
