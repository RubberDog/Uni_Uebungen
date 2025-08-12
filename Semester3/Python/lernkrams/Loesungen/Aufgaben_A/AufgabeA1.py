#from collections import Counter
# import gehört zum "Pythonic Way", Zeilen 28-30

# Aufgabe A1 – Deduplizieren & zählen (ohne Reihenfolge)
# Input:
#
# ["auth.login", "cache.hit", "auth.login", "db.query", "cache.hit", "http.request"]
# Erwarteter Output:
#
# Eindeutige Tags (Set): {"auth.login", "cache.hit", "db.query", "http.request"}
# Anzahl eindeutiger Tags: 4

SOURCE = ["auth.login", "cache.hit", "auth.login", "db.query", "cache.hit", "http.request"]

def deduplication(source):
    """
    Entfernt doppelte Einträge aus den übergebenen Daten.

    Args:
        source (Iterable[str]): Eine Iterierbare Menge

    Returns:
        set[str]: Ein Set mit eindeutigen Einträgen

    """
    return set(source)

# "Pythonic-Way", Vorschlag von ChatGPT
#def eventcounter(source):
#    return Counter(source)

# Meine Lösung mit Schleife
def eventcounter(source):
    """
    Zählt die Vorkommnisse eines jeden Eventtyp.

    Args:
        source (Iterable[str]): Eine Iterierbare Menge

    Returns:
        dict[str: int]: Ein Dictionary mit dem Namen des Events sowie der Anzahl Vorkommnisse.
    """
    event_dict = {}
    for event in source:
        if event not in event_dict:
            event_dict[event] = 1
        else:
            event_dict[event] += 1
    return event_dict

if __name__ == '__main__':
    print(f"Die Quelldaten sind folgende: {SOURCE}")
    einzeleintraege = deduplication(SOURCE)
    print(f"Nach deduplizierung: {einzeleintraege}")
    print(f"Die Anzahl der eindeutigen Tags: {len(einzeleintraege)}")
    print(f"Gezählte Events: {eventcounter(SOURCE)}")
