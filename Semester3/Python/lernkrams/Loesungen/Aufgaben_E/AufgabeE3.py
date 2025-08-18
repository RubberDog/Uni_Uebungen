# Aufgabe E3 – Shallow vs. Deep Copy (Beobachtung)
# Input:
#
# base = {"arr": [1,2]}
# Aktion: flache Kopie ändern, dann tiefe Kopie vergleichen
# Erwarteter Output (Form):
#
# Shallow Copy: Änderung spiegelt sich in base["arr"]
# Deep Copy:   base bleibt unverändert

from copy import copy, deepcopy

base = {"arr": [1,2]}

print(f"Noch nix passiert: {base}")
shallowbase = copy(base)
deepbase = deepcopy(base)
print(f"shallowbase: {shallowbase}")
print(f"deepbase: {deepbase}")

shallowbase["arr"].append(4)
deepbase["arr"].append(5)

print(f"base nach änderung: {base}")
print(f"shallowbase nach änderung: {shallowbase}")
print(f"deepbase nach änderung: {deepbase}")


# Beobachtung:
# Bei einer shallowcopy wird ein neues Dict erstellt, die Inhalte des Originalen aber referenziert ( vgl. C / C++ - Call by Reference ).
# Heisst, eine Änderung (!) der bestehenden Einträge in der Shallow-Copy wirkt sich auf das Original aus!
# Neu hinzugefügte Einträge werden jedoch _NICHT_ übernommen.
#
# Anders bei der deepcopy; hier werden tatsächlich alle Inhalte ebenfalls kopiert, Änderungen haben keine Auswirkung auf base.

# Output;
# Noch nix passiert: {'arr': [1, 2]}
# shallowbase: {'arr': [1, 2]}
# deepbase: {'arr': [1, 2]}
# base nach änderung: {'arr': [1, 2, 4]}
# shallowbase nach änderung: {'arr': [1, 2, 4]}
# deepbase nach änderung: {'arr': [1, 2, 5]}
