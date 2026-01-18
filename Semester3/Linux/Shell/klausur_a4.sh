#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Keine Dateien zum löschen angegeben. Nix zu tun, tschö mit ö.\n"
    exit 2
fi  

for filename in "$@"; do
    if ./klausur_a3.sh "Datei $filename löschen?\n"; then
        rm -- "$filename"
    fi  
done
