# Aufgabe E1 – String vs. Liste id()
# Input:
#
# String: "xy"  → + "z"
# Liste:  [1,2] → append(3)
# Erwarteter Output (Form):
#
# String id vorher != nachher
# Liste  id vorher == nachher
# Kurzer Erklärungstext: Strings unveränderlich, Listen veränderlich.

teststring = "xy"
testliste = [1, 2]

print(f"ID des String ( {teststring} ) vor einer Änderung: {id(teststring)}")
teststring += "z"
print(f"ID des String ( {teststring} ) nach einer Änderung: {id(teststring)}")

print(f"ID der Liste ( {testliste} ) vor einer Änderung: {id(testliste)}")
testliste.append(3)
print(f"ID der Liste ( {testliste} ) nach einer Änderung: {id(testliste)}")

# Geht hierbei eigentlich nur darum zu verstehen, dass Strings immutable (unveränderbar) sind
# Statt einen bestehenden String zu ändern, wird in Python ein neuer mit der gewünschten Änderung erstellt
# Daher der Wechsel der ID.
#
# Listen hingegen sind muteable (veränderbar), gleiche ID trotz Änderung des Inhaltes
