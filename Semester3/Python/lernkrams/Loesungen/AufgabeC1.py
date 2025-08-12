# Aufgabe C1 – Trim first/last
# Input:
#
# "Wismar"
# "A"
# ""
# Erwarteter Output:
#
# "isma"
# ""
# ""

WORDS = ["Wismar", "A", ""]

def trim(words):
    new_list = []
    for word in words:
        new_list.append(word[1:-1])
    return new_list

if __name__ == '__main__':
    print(f"Trimmed: {trim(WORDS)}")
