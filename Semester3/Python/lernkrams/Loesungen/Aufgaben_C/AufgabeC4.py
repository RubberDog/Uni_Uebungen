# Aufgabe C4 – Slice mit Schrittweite
# Input:
#
# String: "0123456789", step = 3
# Erwarteter Output:
#
# "0369"

eingabe = "0123456789"

def trim(word):
    return(word[::3])

if __name__ == '__main__':
    print(f"Trimmed: {trim(eingabe)}")
