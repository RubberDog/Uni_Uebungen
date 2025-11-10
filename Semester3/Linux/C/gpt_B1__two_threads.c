#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

// Gemeinsame Mutex für die Konsolenausgabe
pthread_mutex_t lock;

// Thread-Funktion
void* thread_func(void* arg) {
    char* name = (char*) arg;

    for (int i = 1; i <= 10; i++) {
        pthread_mutex_lock(&lock);  // Eintritt in den kritischen Bereich
        printf("%s: %d\n", name, i);
        pthread_mutex_unlock(&lock);  // Freigabe des kritischen Bereichs

        sleep(1); // damit man die Ausgabe zeitlich getrennt sieht
    }

    pthread_exit(NULL);
}

int main(void) {
    pthread_t thread1, thread2;

    // Mutex initialisieren
    if (pthread_mutex_init(&lock, NULL) != 0) {
        perror("Mutex konnte nicht initialisiert werden");
        return EXIT_FAILURE;
    }

    // Threads erstellen
    pthread_create(&thread1, NULL, thread_func, "Thread 1");
    pthread_create(&thread2, NULL, thread_func, "Thread 2");

    // Auf Threads warten
    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    // Mutex zerstören
    pthread_mutex_destroy(&lock);

    printf("Beide Threads sind fertig.\n");
    return EXIT_SUCCESS;
}

