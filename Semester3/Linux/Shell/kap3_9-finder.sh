#!/bin/bash

#Schreiben Sie ein Script, das die root-Partition nach Dateien durchsucht, die in den letzten x Tagen geändert wurden 
#und eine Größe von y Blöcken haben (512 byte pro Block).
#Die Angaben sollen beim Programmaufruf mit übergeben werden.


if [ $# -ne 2 ]; then
    echo "Exakt 2 Argumente benötigt."
    echo "./finder 4 10"
    echo "Findet Dateien im root-Verzeichnis, die in den letzten 4 Tagen geändert wurden und 10 Blöcke groß sind."
    exit 1
fi

find / -maxdepth 0 -mtime $1 -size $2
