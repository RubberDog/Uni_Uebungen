#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Keine Dateien angegeben."
    exit 2
fi

for file in "$@"; do
    if ./myquestion.sh "Datei $file löschen?"; then
        rm $file
    fi
done
