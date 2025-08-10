# Aufgabe A2 – Schnittmenge zweier Quellen
# Input:
#
# A = ["cache.hit", "http.request", "error.timeout", "db.query"]
# B = ["auth.login", "cache.hit", "http.response", "error.timeout"]
# Erwarteter Output:
#
# Schnittmenge (Set): {"cache.hit", "error.timeout"}


A = ["cache.hit", "http.request", "error.timeout", "db.query"]
B = ["auth.login", "cache.hit", "http.response", "error.timeout"]

def schnittmenge(quelle, referenz):
    """
    Gibt die Schnittmenge zweier Iterables zurück.

    Args:
        quelle (Iterable[str]): Eine iterierbare Datenstruktur
        referenz (Iterable[str]): Eine zweite iterierbare Datenstruktur als Referenz

    Returns:
        set[str]: Ein Set mit der Schnittmenge
    """
    return set(quelle) & set(referenz)


if __name__ == '__main__':
    print(f"Die Schnittmenge beider Listen ist: {schnittmenge(A, B)}")
