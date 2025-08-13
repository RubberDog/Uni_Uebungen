# Aufgabe D4 – Tags mit Prefix
# Input:
#
# Tags = ["db.connect", "http.request", "db.query", "auth.login"]
# Prefix = "db."
# Erwarteter Output:
#
# ["db.connect", "db.query"]

Tags = ["db.connect", "http.request", "db.query", "auth.login"]
Prefix = "db."

def prefix(items, prefix):
    return [item for item in items if item.startswith(prefix)]

if __name__ == '__main__':
    print(f"Prefix-Matches: {prefix(Tags, Prefix)}")
