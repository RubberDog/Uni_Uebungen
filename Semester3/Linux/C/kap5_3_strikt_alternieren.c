int an_der_Reihe = 0;
int anzahl_prozesse = 12;

void kritischer_bereich() {
  printf("Hier könnte Ihre Werbung stehen");
}

void nicht_kritischer_bereich() {
  prinft("Buy high, sell low - ??? - Profit! oder so.");
}

void* thread_function(void* arg) {
  // watch out, horrible black magic happening ahead - aka, ich mag kein Pointer-Voodoo.
  int thread_nummer = *((int*)arg);
  while (1) {
    if (an_der_Reihe == thread_nummer)
    kritischer_bereich();
    an_der_Reihe = (an_der_Reihe + 1) % anzahl_prozesse;
    nicht_kritischer_bereich();
  }
  return NULL;
}

int main() {
  pthread_t threads[anzahl_prozesse];
  int thread_ids[anzahl_prozesse];

  for (int i = 0; i < anzahl_prozesse; i++) {
    thread_ids[i] = i;
    pthread_create(&threads[i], NULL, thread_function, &thread_ids[i]);
  }

  for (int i = 0; i < anzahl_prozesse; i++) {
    pthread_join(threads[i], NULL);
  }

  return 0;
}
