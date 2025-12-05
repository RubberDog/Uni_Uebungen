#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Keine Frage? Keine Antwort. Geh weg."
    exit 2
fi

frage="$*"

while true; do
    read -p "$frage (Ja/Nein): " antwort
    antwort=$(echo "$antwort" | tr '[:upper:]' '[:lower:]')

    case "$antwort" in
        ja|j)
            exit 0
            ;;
        nein|n)
            exit 1
            ;;
        *)
            echo "So nich, Brudi"
            ;;
    esac
done
