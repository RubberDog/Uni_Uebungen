#!/bin/bash

#Schreiben Sie ein Script, das sich die Systemzeit holt, sich aus dieser die aktuelle Stunde holt und eine entsprechende Meldung ausgibt. 
#Von 9.00 bis 11.00 Uhr wird "Guten Morgen" ausgegeben, um 12:00 Uhr "Mahlzeit", 
#von 13:00 bis 17:00 Uhr "Zeit für eine Pause" und bei allem anderen "Schönen Abend und süße Träume".
#Geben Sie die Meldungen in einem Intervall aus, dass Sie sich aussuchen können.

while true; do
    stunde=$(date +%H)

    if (( "$stunde" >= 9 && "$stunde" <= 11 )); then
        echo "Guten Morgen"
    elif (( "$stunde" == 12 )); then
        echo "MAAAAAAHLZEIT!"
    elif (( "$stunde" >= 13 && "$stunde" <= 17 )); then
        echo "Zeit für eine Pause"
    else
        echo "Schönen Abend und süße Träume"
    fi
    sleep 5
done
