#!/bin/bash

# ausgabe über aenderungen fehlt noch

new=/tmp/users_new.$$
old=/tmp/users_old.$$

>$old
i=1
while true
    do
        who > $new
        diff $old $new
        if [ $? == 0 ]
        then
            echo "Keine Aenderungen"
        fi
        mv $new $old
        echo "Angemeldete User: `who | wc -l`"
        sleep 60
    done
