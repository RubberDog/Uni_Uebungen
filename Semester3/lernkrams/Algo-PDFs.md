## Rekonstruktion von Bäumen aus Traversierungen. 

a) Rekonstruieren Sie aus der INORDER Traversierung: 1, 2, 3, 4, 5, 6, 7 den zugehörigen Binärbaum. \
Ist Ihre Rekonstruktion eindeutig oder lassen sich verschiedene Bäume erstellen? 

```
     4
   /  \
  2    6
 / \  / \
1  3 5   7
```
Diese Rekonstruktion ist nicht eindeutig.\
Eine Eindeutige Rekonstruktion erfordert zwei Traversierungen.

b) Rekonstruieren Sie den zugehörigen Binärbaum aus den beiden  Traversierungen: 
- INORDER Traversierung: 1, 2, 3, 4, 5, 6, 7  
- PREORDER Traversierung: 4, 2, 1, 3, 6, 5, 7 \
Ist diese Rekonstruktion eindeutig?

Preorder: Erstes Element ist die Wurzel
```
In: 1,2,3,4,5,6,7
Pre: 4,2,1,3,6,5,7
4 Wurzel, vgl. IN -> 1,2,3 links davon, 5,6,7 rechts davon
Pre: 4 streichen, dann 2 erstes Element -> Wurzel links -> vgl. IN -> 1 links davon, 3 rechts davon -> linke Seite fertig
Pre: besteht noch aus 6, 5, 7
Pre: 6 = Wurzel, vgl. IN -> 5 links, 7 rechts -> rechte Seite fertig
Baum fertig
```

```
     4
   /  \
  2    6
 / \  / \
1  3 5   7
```
Aufgrund der zwei unterschiedlichen Traversierungsformen lässt sich hier ein eindeutiger Baum erstellen.

## Rekonstruieren Sie den zugehörigen Binärbaum aus den beiden Traversierungen: 
- INORDER: D, G, B, A, H, E, I, C, F  
- POSTORDER: G, D, B, H, I, E, F, C, A

## Rekonstruktion von Bäumen aus Traversierungen. 

a) Beschriften Sie die Knoten des gegebenen Baumes, sodass dessen Postorder Traversierung die Folge\
2 4 3 11 14 13 18 16 10\
ergibt. \
<img width="455" height="241" alt="image" src="https://github.com/user-attachments/assets/27734eea-ee37-4726-8b17-e3b743fd9636" />


b) Beschriften Sie die Knoten des gegebenen Baumes, sodass dessen  Postorder Traversierung die Folge \
2 9 4 3 12 11 15 14 13 18 16 10\
ergibt.\
<img width="513" height="292" alt="image" src="https://github.com/user-attachments/assets/f91feae5-a779-4afc-92e1-0f85c191c4e1" />


## Wenden Sie das Heap-Sort Verfahren an, um die Sortierung aus dem Vorlesungsbeispiel zu vervollständigen.\
Veranschaulichen Sie die Sortierschritte, indem Sie die neue Reihenfolge der zu sortierenden Elemente \
nach jedem Sortierschritt sowie den neuen verkürzten Heap darstellen. \
\
1 14 10 8 7 9 3 2 4 16\
<img width="294" height="192" alt="image" src="https://github.com/user-attachments/assets/7cfc0d2a-de8a-412c-b989-00103f4de95d" />

<img width="630" height="864" alt="image" src="https://github.com/user-attachments/assets/0b90936f-1511-47e2-a76d-d7e16a0a2e71" />

<img width="653" height="805" alt="image" src="https://github.com/user-attachments/assets/998c6555-ae98-420f-9854-9d4dcddc0427" />

<img width="629" height="391" alt="image" src="https://github.com/user-attachments/assets/6abe0201-dec1-4cc6-95be-9b4326bef41f" />
