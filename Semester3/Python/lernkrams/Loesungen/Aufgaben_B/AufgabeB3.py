# Aufgabe B3 – Top‑N größer als Umfang
# Input:
#
# Counts = {"x": 5, "y": 1}
# N = 10
# Erwarteter Output:
#
# [("x", 5), ("y", 1)]

Counts = {"x": 5, "y": 1}
N = 10

def split_at_n(iterable, n):
    return sorted(iterable.items())[:n]

if __name__ == '__main__':
    print(f"Output: {split_at_n(Counts, N)}")
