**Hinweis:** Keine Lösungen, nur Aufgaben mit Beispiel‑Inputs und erwarteten Outputs. Jede Aufgabe hat kleine Varianten, damit es nicht langweilig wird.

---

## A) Sets & Mitgliedschaft (Dedup, Mengenlogik)

**Ziel:** Duplikate entfernen, Schnittmengen/Vereinigungen bilden, Mitgliedschaft testen.

### Aufgabe A1 – Deduplizieren & zählen (ohne Reihenfolge)

**Input:**

```
["auth.login", "cache.hit", "auth.login", "db.query", "cache.hit", "http.request"]
```

**Erwarteter Output:**

```
Eindeutige Tags (Set): {"auth.login", "cache.hit", "db.query", "http.request"}
Anzahl eindeutiger Tags: 4
```

### Aufgabe A2 – Schnittmenge zweier Quellen

**Input:**

```
A = ["cache.hit", "http.request", "error.timeout", "db.query"]
B = ["auth.login", "cache.hit", "http.response", "error.timeout"]
```

**Erwarteter Output:**

```
Schnittmenge (Set): {"cache.hit", "error.timeout"}
```

### Aufgabe A3 – Vereinigung & Differenz

**Input:**

```
A = {"user.create", "user.update", "user.delete"}
B = {"user.update", "session.start"}
```

**Erwarteter Output:**

```
Vereinigung: {"user.create", "user.update", "user.delete", "session.start"}
Nur in A (Differenz): {"user.create", "user.delete"}
Nur in B (Differenz): {"session.start"}
```

### Aufgabe A4 – Mitgliedschaftscheck (Hits/Misses)

**Input:**

```
Tags = {"env.dev", "env.staging", "env.prod"}
Prüfen: ["env.dev", "env.qa", "env.prod", "env.local"]
```

**Erwarteter Output:**

```
Treffer: ["env.dev", "env.prod"]
Nicht vorhanden: ["env.qa", "env.local"]
```

---

## B) Dictionaries & Häufigkeiten

**Ziel:** Häufigkeiten zählen, deterministisch sortieren (Count desc, Tag asc), Top‑N bilden.

### Aufgabe B1 – Häufigkeitsreport

**Input:**

```
["http.request", "http.request", "cache.miss", "error.db", "http.request", "cache.miss", "auth.login"]
```

**Erwarteter Output:**

```
{"http.request": 3, "cache.miss": 2, "error.db": 1, "auth.login": 1}
```

### Aufgabe B2 – Top‑N (mit Ties)

**Input:**

```
Counts = {"a": 3, "b": 3, "c": 2, "d": 1}
N = 3
```

**Erwarteter Output:**

```
[("a", 3), ("b", 3), ("c", 2)]
```

*(Begründung: gleiche Counts → alphabetische Reihenfolge a\<b)*

### Aufgabe B3 – Top‑N größer als Umfang

**Input:**

```
Counts = {"x": 5, "y": 1}
N = 10
```

**Erwarteter Output:**

```
[("x", 5), ("y", 1)]
```
Hint: "Umfang" meint hier den Umfang des Dictionary. 

### Aufgabe B4 – Stabiler Sortierschlüssel testen

**Input:**

```
Counts = {"alpha": 2, "beta": 2, "gamma": 2}
N = 2
```

**Erwarteter Output:**

```
[("alpha", 2), ("beta", 2)]
```

---

## C) Strings & Slicing

**Ziel:** Teilstrings, Schrittweiten, Umkehrung, robuste Kantenfälle.

### Aufgabe C1 – Trim first/last

**Input:**

```
"Wismar"
"A"
""
```

**Erwarteter Output:**

```
"isma"
""      
""      
```

### Aufgabe C2 – Jedes 2. Zeichen

**Input:**

```
"abc123XYZ"
```

**Erwarteter Output:**

```
"ac2XZ"
```

### Aufgabe C3 – Reverse via Slicing

**Input:**

```
"payload"
```

**Erwarteter Output:**

```
"daolyap"
```

### Aufgabe C4 – Slice mit Schrittweite

**Input:**

```
String: "0123456789", step = 3
```

**Erwarteter Output:**

```
"0369"
```

---

## D) List Comprehensions (Filtern & Transformieren)

**Ziel:** Kurzformen für Filter/Map, zusammengesetzte Bedingungen.

### Aufgabe D1 – Even Squares 1..n

**Input:**

```
n = 12
```

**Erwarteter Output:**

```
[4, 16, 36, 64, 100, 144]
```

### Aufgabe D2 – Quiet Hours Filter (22:00–06:00)

**Input:**

```
[
  {"ts": "21:50", "severity": "warning", "tag": "http.request"},
  {"ts": "22:30", "severity": "critical", "tag": "db.connect"},
  {"ts": "23:59", "severity": "critical", "tag": "service.email"},
  {"ts": "00:15", "severity": "critical", "tag": "security.csrf"},
  {"ts": "06:00", "severity": "critical", "tag": "cache.miss"}
]
```

**Erwarteter Output:**

```
["db.connect", "service.email", "security.csrf"]
```

### Aufgabe D3 – Normierte Tags (trim + lower)

**Input:**

```
[" Cache.Hit ", "cache.hit", "CACHE.MISS ", " cache.Miss"]
```

**Erwarteter Output:**

```
["cache.hit", "cache.hit", "cache.miss", "cache.miss"]
```

### Aufgabe D4 – Tags mit Prefix

**Input:**

```
Tags = ["db.connect", "http.request", "db.query", "auth.login"]
Prefix = "db."
```

**Erwarteter Output:**

```
["db.connect", "db.query"]
```

---

## E) Immutability & Identität

**Ziel:** Unterschied zwischen veränderlichen/unveränderlichen Typen sichtbar machen.

### Aufgabe E1 – String vs. Liste `id()`

**Input:**

```
String: "xy"  → + "z"
Liste:  [1,2] → append(3)
```

**Erwarteter Output (Form):**

```
String id vorher != nachher
Liste  id vorher == nachher
Kurzer Erklärungstext: Strings unveränderlich, Listen veränderlich.
```

### Aufgabe E2 – Kosten von Konkatenation (Mini‑Messung)

**Input:**

```
Anzahl = 50_000 (zwei Varianten: mit "+=", mit join)
```

**Erwarteter Output (Form):**

```
Zeit_join < Zeit_plusgleich   (typisch)
```

### Aufgabe E3 – Shallow vs. Deep Copy (Beobachtung)

**Input:**

```
base = {"arr": [1,2]}
Aktion: flache Kopie ändern, dann tiefe Kopie vergleichen
```

**Erwarteter Output (Form):**

```
Shallow Copy: Änderung spiegelt sich in base["arr"]
Deep Copy:   base bleibt unverändert
```

---

## F) Exceptions (gezielt fangen, sauber berichten)

**Ziel:** Typische Fehlerfälle behandeln, ohne Programmabsturz.

### Aufgabe F1 – Paarweise Summen (robust)

**Input:**

```
[3, 4, "4", 7, 9]
```

**Erwarteter Output:**

```
["7", "TypeError", "TypeError", "16"]
```

### Aufgabe F2 – Grenzen & Ungerade Länge

**Input:**

```
[1, 2, 3]
```

**Erwarteter Output:**

```
["3"]   (und keine Exception am Ende)
```

### Aufgabe F3 – Coercion (optional)

**Input:**

```
["10", "20", "x", 5]
Policy: versuche in int zu wandeln, sonst Fehlertext
```

**Erwarteter Output:**

```
["30", "TypeError", "5"]
```

---

## G) JSON‑Parsing (defensiv)

**Ziel:** Text → Python‑Objekte, sichere Zugriffe, Defaults.

### Aufgabe G1 – Hotelname & Gästezahl

**Input:**

```
{
  "booking": {
    "id": "BK-2025-08-001",
    "hotel": {"name": "Grand Central", "city": "Berlin"},
    "guests": [
      {"first_name": "Mira"},
      {"first_name": "Jonas"}
    ]
  }
}
```

**Erwarteter Output:**

```
Hotel: "Grand Central"
Guests: 2
```

### Aufgabe G2 – Fehlende Felder abfedern

**Input:**

```
{"booking": {"hotel": {"city": "Berlin"}}}
```

**Erwarteter Output:**

```
Hotel: "" (leer)
Guests: 0
```

### Aufgabe G3 – Ungültiges JSON melden

**Input:**

```
"{ booking: oops }"
```

**Erwarteter Output (Form):**

```
Fehlertext: "Ungültiges JSON: ..."
```

---

## H) Integrationsaufgaben (Mix aus allem)

**Ziel:** Mehrere Kapitel in einem Miniprojekt zusammenführen.

### Aufgabe H1 – Log‑Dashboard Mini

**Input:**

```
Roh‑Events (JSON‑Strings, Liste):
[
  "{\"ts\":\"22:30\",\"severity\":\"critical\",\"tag\":\"db.connect\"}",
  "{\"ts\":\"10:15\",\"severity\":\"warning\",\"tag\":\"http.request\"}",
  "{\"ts\":\"00:05\",\"severity\":\"critical\",\"tag\":\"security.csrf\"}"
]
```

**Erwarteter Output:**

```
- Anzahl Events gesamt: 3
- Quiet‑Hours kritische Tags: ["db.connect", "security.csrf"]
- Top‑Tags (bis N=2): [("db.connect", 1), ("http.request", 1)]  
  (Alphabetische Ordnung bei Gleichstand)
```

### Aufgabe H2 – Tag‑Hygiene Pipeline

**Input:**

```
[" Cache.Hit ", "cache.hit", "CACHE.MISS ", " cache.Miss", "auth.login "]
```

**Erwarteter Output:**

```
- Normalisiert: ["cache.hit", "cache.hit", "cache.miss", "cache.miss", "auth.login"]
- Eindeutige Tags: {"cache.hit", "cache.miss", "auth.login"}
- Häufigkeiten: {"cache.hit": 2, "cache.miss": 2, "auth.login": 1}
```

### Aufgabe H3 – „Top‑N pro Kategorie“

**Input:**

```
Events (Liste von Dicts):
[
  {"cat": "db", "tag": "db.connect"},
  {"cat": "db", "tag": "db.query"},
  {"cat": "http", "tag": "http.request"},
  {"cat": "http", "tag": "http.request"},
  {"cat": "http", "tag": "http.response"}
]
N = 1
```

**Erwarteter Output:**

```
Pro Kategorie Top‑1:
- db: [("db.connect", 1)] oder [("db.query", 1)]  
  (alphabetische Entscheidung bei Gleichstand)
- http: [("http.request", 2)]
```

---

**Tipp:** Zu jeder Aufgabe kurze Docstrings schreiben (Google‑Style) und deine Policies (z. B. Normalisierung) im Text benennen, damit du später weißt, was „richtig“ ist.

