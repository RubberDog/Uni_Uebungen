# Aufgabe D2 – Quiet Hours Filter (22:00–06:00)
# Input:
#
# [
#   {"ts": "21:50", "severity": "warning", "tag": "http.request"},
#   {"ts": "22:30", "severity": "critical", "tag": "db.connect"},
#   {"ts": "23:59", "severity": "critical", "tag": "service.email"},
#   {"ts": "00:15", "severity": "critical", "tag": "security.csrf"},
#   {"ts": "06:00", "severity": "critical", "tag": "cache.miss"}
# ]
# Erwarteter Output:
#
# ["db.connect", "service.email", "security.csrf"]

logfile = [
  {"ts": "21:50", "severity": "warning", "tag": "http.request"},
  {"ts": "22:30", "severity": "critical", "tag": "db.connect"},
  {"ts": "23:59", "severity": "critical", "tag": "service.email"},
  {"ts": "00:15", "severity": "critical", "tag": "security.csrf"},
  {"ts": "06:00", "severity": "critical", "tag": "cache.miss"}
]

def quiet_hours(logs):
    return [line["tag"] for line in logs if line["ts"] > "22:00" or line["ts"] < "06:00"]

# Notiz für Zukunfts-Matti;
# Das funktioniert hier nur "zufällig". Um das ganze wirklich sicher zu bauen, müsste man sowohl Start- und Endzeit
# sowie die Zeiten hinter "ts" in datetime-objekte umwandeln.


if __name__ == '__main__':
    print(f"Logfile während quiet hours: {quiet_hours(logfile)}")
