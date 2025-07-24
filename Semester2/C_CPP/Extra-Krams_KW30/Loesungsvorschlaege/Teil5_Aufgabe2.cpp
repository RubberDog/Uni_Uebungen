int func(int x, int &y, int z, int *py, double *pdata) {
  x += 5;
  y *= 3;
  z -= 2;
  *py += 4;
  *(pdata + 1) += 3.5;
  return(z + 5);
}

int main() {
  int p = 15, q = 16, r = 17, s = 18, t = 19;
  double data[] = {2.0, 3.0, 4.0, 5.0, 6.0};
  p = func(q, r, s, &t, data)
  q = p;
  r = s;
  s = t;
  t = (int)data[2];
  data[0] = s;
  data[1] = t;
  data[2] = data[4];
  data[3] = data[0]
}

/*
Gesucht:
inhalt von p, q, r, s, t und data[] nach ausführung func

Problem mit aufgabenstellung; DIREKT nach func()? oder nach dem rest in Main, weil dort die inhalte geändert werden?
direkt nach func;
p = 21 // "p" ist der returnwert der Funktion. return ist z + 5. z ist ursprünglich "s", also 18, wird in zeile 4 um 2 verringert
q = 16 // call bei value, wird als lokale kopie in func() verarbeitet, q bleibt unberührt
r = 17 * 3 = 51 // call by reference, wird verändert
s = 18 // call by value, wird als lokale kopie in func() verarbeitet, s bleibt unberührt
t = 23 // wird als reference übergeben
data[] = {2.0, 6.5, 4.0, 5.0, 6.0}

nach weiteren änderungen in main():
p = 21
q = 21 // wird kopiert aus p
r = 18 // wird zur kopie von s
s = 18
t = 4 // wird zum inhalt von index 2 aus data, nach int gecastet
data[] = {18.0, 4.0, 6.0, 18.0, 6.0}
*/
