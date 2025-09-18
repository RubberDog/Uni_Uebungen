#!/bin/bash

# ist im grossen und ganzne das watchfor-script von seite 36

new=/tmp/users_new.$$
old=/tmp/users_old.$$

>$old

while true
    do
        who > $new
        diff $old $new
        mv $new $old
        sleep 60
    done | awk '/>/ { $1 = "in: "; print }
    /</ { $1 = "out: "; print } '
