# Aufgabe D1 – Even Squares 1..n
# Input:
#
# n = 12
# Erwarteter Output:
#
# [4, 16, 36, 64, 100, 144]
# Erklärung dazu:
#
# Zahlenreihe 1 bis n erzeugen
# prüfen, ob Zahl gerade ist
# wenn ja, quadrieren

n = 12

def work_through_numbers(weite):
    return [i * i for i in range(1, weite + 1) if i % 2 == 0]


if __name__ == '__main__':
    print(f"Gerade Zahlen von 1 bis {n} quadriert: {work_through_numbers(n)}")
