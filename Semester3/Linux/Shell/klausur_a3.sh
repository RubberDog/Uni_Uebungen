#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Ja nee. Keine Frage, keine Antwort. Tschö"
    exit 2
fi

frage="$*"

while true; do
    read -p "$frage (Ja/Nein)?: " antwort

    case "$antwort" in
        ja|Ja|JA)
            echo "Okidoki!"
            exit 0
            ;;
        nein|Nein|NEIN)
            echo "Dann halt nich.."
            exit 1
            ;;
        *)
            echo "So funktioniert das nich"
            ;;
    esac
done
