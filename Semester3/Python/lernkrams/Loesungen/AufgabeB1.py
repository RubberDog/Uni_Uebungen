# Aufgabe B1 – Häufigkeitsreport
# Input:
#
# ["http.request", "http.request", "cache.miss", "error.db", "http.request", "cache.miss", "auth.login"]
# Erwarteter Output:
#
# {"http.request": 3, "cache.miss": 2, "error.db": 1, "auth.login": 1}

SOURCE = ["http.request", "http.request", "cache.miss", "error.db", "http.request", "cache.miss", "auth.login"]

def count_occurrences(items):
    occurrences = {}
    for item in items:
        if item not in occurrences:
            occurrences[item] = 1
        else:
            occurrences[item] += 1
    return occurrences

if __name__ == '__main__':
    print(f"Folgende Items mit Häufigkeit wurden gefunden: {count_occurrences(SOURCE)}")
