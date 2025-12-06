#!/bin/bash

#Schreiben Sie ein Shell-Script, das die ersten n Files eines Ordners löscht. 
#Das Verzeichnis und die Anzahl der zu löschenden Dateien sollen als Paramter 
#beim Aufrufen angegeben werden.

if [ $# -ne 2 ]; then
    echo "Usage: ./n-delete /path/to/dir number"
    exit 1
fi

curdir=$(pwd)

cd "$1" && rm $(ls | head -n "$2")

cd $curdir
