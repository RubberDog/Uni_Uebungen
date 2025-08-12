# Aufgabe B4 – Stabiler Sortierschlüssel testen
# Input:
#
# Counts = {"alpha": 2, "beta": 2, "gamma": 2}
# N = 2
# Erwarteter Output:
#
# [("alpha", 2), ("beta", 2)]

Counts = {"beta": 2, "alpha": 2, "gamma": 2}
N = 2

def cut_and_sort(iterable, n):
    return sorted(iterable.items(), key=lambda x: (-x[1], x[0]))[:n]

if __name__ == '__main__':
    print(f"Die Liste: {cut_and_sort(Counts, N)}")

# Ist im Prinzip wie Aufgaben B2 und B3 - hier geht's aber drum, den zweiten Sortierschlüssel (Key des Dictionary) zu nutzen, wenn der erste Sortierschlüssel (der Wert) identisch ist (2)
