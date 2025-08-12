# Aufgabe B2 – Top‑N (mit Ties)
# Input:
#
# Counts = {"a": 3, "b": 3, "c": 2, "d": 1}
# N = 3
# Erwarteter Output:
#
# [("a", 3), ("b", 3), ("c", 2)]
# (Begründung: gleiche Counts → alphabetische Reihenfolge a<b)

Counts = {"a": 3, "b": 3, "c": 2, "d": 1}
N = 3

def top_n_ties(counts, n):
    return sorted(counts.items(), key=lambda x: (-x[1], x[0]))[:n]

# Weil ich's garantiert wieder vergesse, weil man's zu selten braucht:
# lambda -> unbenannte Funktion für den Sortierschlüssel (übergeben an sorted() )
# durch couunts.items() entstehen tupel aus key (a, b, c, d) und value (3, 3, 2, 1)
# -x[1] -> zielt auf value ab ( [1] ), -x sorgt für absteigende Sortierung
# x[0] -> zielt auf den key ab ( [0] ), aufsteigende, ergo alphabetische Sortierung
# [:n] -> "splice string", von Anfang (weil nicht gesetzt) bis "n"

if __name__ == '__main__':
    print(f"Hier die angepasste Liste: {top_n_ties(Counts, N)}")
