# Aufgabe A3 – Vereinigung & Differenz
# Input:
#
# A = {"user.create", "user.update", "user.delete"}
# B = {"user.update", "session.start"}
# Erwarteter Output:
#
# Vereinigung: {"user.create", "user.update", "user.delete", "session.start"}
# Nur in A (Differenz): {"user.create", "user.delete"}
# Nur in B (Differenz): {"session.start"}

A = {"user.create", "user.update", "user.delete"}
B = {"user.update", "session.start"}

def vereinigung(menge_a, menge_b):
    # return menge_a.union(menge_b)
    return menge_a | menge_b

def differenz(menge_a, menge_b):
    # return menge_a.difference(menge_b)
    return menge_a - menge_b

if __name__ == '__main__':
    print(f"Vereinigung: {vereinigung(A, B)}")
    print(f"Nur in A: {differenz(A, B)}")
    print(f"Nur in B: {differenz(B, A)}")
