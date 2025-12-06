#!/bin/bash

#Schreiben Sie ein Script, das mit Traps arbeitet. Nach dem Starten soll immer ein eigenes Prompt angezeigt werden, 
#das alle Eingaben entgegennimmt, aber nicht ans System weiterleitet. 
#Wenn der Benutzer "stop" oder "Stop" eingibt, soll das Programm beendet werden. 
#Wird Strg + c oder Strg + z oder Strg + \ eingegeben wird das Programm nicht beendet, es wird lediglich eine Meldung ausgegeben.

trap "echo 'YOU NO TAKE CANDLE!'" SIGINT
trap "echo 'Good News everyone!'" SIGTSTP
trap "echo 'I will show you...this beaten dog STILL HAS SOME TEETH!'" SIGQUIT

while true; do
    read -p "h4Xx> " input

    input=$(echo "$input" | tr '[:upper:]' '[:lower:]')

    case $input in
        stop)
            exit 0
            ;;
        *)
            ;;
    esac
done
