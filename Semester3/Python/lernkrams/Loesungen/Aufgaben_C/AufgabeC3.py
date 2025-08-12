# Aufgabe C3 – Reverse via Slicing
# Input:
#
# "payload"
# Erwarteter Output:
#
# "daolyap"

eingabe = "payload"

def reverse(word):
    return(word[::-1])

if __name__ == '__main__':
    print(f"Reversed: {reverse(eingabe)}")
