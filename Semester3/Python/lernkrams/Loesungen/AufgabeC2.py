# Aufgabe C2 – Jedes 2. Zeichen
# Input:
#
# "abc123XYZ"
# Erwarteter Output:
#
# "ac2XZ"

eingabe = "abc123XYZ"

def trim(word):
    return(word[::2])

if __name__ == '__main__':
    print(f"Trimmed: {trim(eingabe)}")
