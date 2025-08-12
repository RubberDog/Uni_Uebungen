# Aufgabe A4 – Mitgliedschaftscheck (Hits/Misses)
# Input:
#
# Tags = {"env.dev", "env.staging", "env.prod"}
# Prüfen: ["env.dev", "env.qa", "env.prod", "env.local"]
# Erwarteter Output:
#
# Treffer: ["env.dev", "env.prod"]
# Nicht vorhanden: ["env.qa", "env.local"]

Tags = {"env.dev", "env.staging", "env.prod"}
Checklist = ["env.dev", "env.qa", "env.prod", "env.local"]

def check_member(tags, checklist):
    match = []
    non_match = []
    for item in checklist:
        if item in tags:
            match.append(item)
        else:
            non_match.append(item)
    print(f"Die folgenden Items wurden gefunden: {match}")
    print(f"Die folgenden Items wurden nicht gefunden: {non_match}")

if __name__ == '__main__':
    check_member(Tags, Checklist)
