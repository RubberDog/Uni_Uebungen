#!/bin/bash

previous=$(who | wc -l)

while true; do
    current=$(who | wc -l)

    aenderung=$(( current - previous))

    if [ $aenderung -lt 0 ]; then
        echo "Es haben sich $aenderung User abgemeldet. Aktuell sind $current online."
    elif [ $aenderung -gt 0 ]; then
        echo "Es haben sich $aenderung User angemeldet. Aktuell sind $current online."
    elif [ $aenderung -eq 0 ]; then
        echo "Keine Änderung der Userzahl."
    fi
    previous=$current
    sleep 3
done
