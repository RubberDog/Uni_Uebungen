Gegeben:

int k;
double x = 4.2, y = 1.9, z;
char ch1 = 12, ch2 = 7;
int array[12];
int *ptr1; -> 0xB010
int *ptr2; -> 0xB000

a) k = x + y 
     = 4.2 + 1.9
     = 6.1 // jetzt zu int weil int k
     k = 6

b) z = (int)(x) + (int)y
   z = (int)(4.2) + (int)(1.9)
   z = 4 + 1
   z = 5

c) k = (int)(x+y)
   k = (int)(4.2 + 1.9)
   k = (int) 6.1
   k = 6;

d) k = sizeof(array[0])
   k = 4 (byte), da die größe eines Elementes abgefragt wird. Elemente sind hier vom Typ int, also -> 4 byte

e) k = sizeof(array)
   k = 4 byte * 12 elemente = 48 (byte), da 12 elemente mit jeweils 4 Byte vorhanden sind.

f) ch1 = ch1 >> 1
   ch1 = 12, bit-sicht: 0000 1100
   shift nach rechts um 1
   0000 0110, in dezimal: 6
   ch1 = 6

g) ch2 = ch2 << 3;
   ch2 = 7, bit-sicht: 0000 0111
   bit-shift 3 nach links
   0011 1000, in dezimal 32 + 16 + 8 = 56

h) ch2 = ch2 - ch1
   // aufgabe unklar. ursprünglich ch1 / ch2 oder die neu zugewiesenen?
   mit ursprünglichen werten; 12 - 7 = 5
   mit neuen werten; 56 - 6 = 50;

i) k = ptr2 - ptr1;
   k = 0xB000 - 0xB010 = -0x0010 -> dezimal -16. beides sind pointer auf int, daher die -16 / sizeof(int) = -16 / 4 = -4
// nach meinem verständnis eigentlich nicht möglich, chatgpt sagt es geht. kann sein.

j) ptr1++
   ptr1 = 0xB014 // das isso, weil der pointer auf den nächsten index geschoben wird. bei pointern auf int also + 4 byte, lässt sich hier sehr einfach eintragen
