h(x) = x mod 10

49, 22, 62, 42, 33, 34, 19

```
49 mod 10 = 9
22 mod 10 = 2
62 mod 10 = 2
42 mod 10 = 2
33 mod 10 = 3
34 mod 10 = 4
19 mod 10 = 9
```

<img width="481" height="38" alt="image" src="https://github.com/user-attachments/assets/6c0c3f60-9aad-4e07-b698-c7991ffe0aba" />

Merkkrams zu Kollisionsvermeidung;

Offenes Hashing -> verkettete Listen pro Eintrag

Geschlossenes Hashing:
- Lineare Sondierung (bei Kollision auf das nächste freie Element legen)
- quadratische Sondierung (quadrieren - wenn 1 belegt auf 4 (2²), dann 9 (3²), etc, verringert Clusterbildung)
- doppeltes Hashing (zweite Hashfunktion, unabhängig von der ersten)


Besonderheiten

Geschlossenes Hashing - Lineare Sondierung
- benötigt Hilfsarray, in welchem festgehalten wird welche Elemente (L)eer, (B)elegt oder (G)elöscht wurden
  - wichtig für die Suche, da am "korrekten" Platz begonnen und (G)elöscht übersprungen wird, Suche endet negativ wenn (L)eer erreicht wird
 

Quadratische Sondierung & doppeltes Hashing nur angerissen, daher höchstens ein "welche alternativen Möglichkeiten kennen Sie?", keine richtigen Aufgaben
