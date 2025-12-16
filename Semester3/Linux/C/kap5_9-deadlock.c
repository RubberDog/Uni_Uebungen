#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;
pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;


void* thread_function1(void* arg) {
    pthread_mutex_lock(&mutex1);
    printf("Thread 1 tut so, als würde er arbeiten..\n");
    // Die Ausgabe kam nie... chatgpt hat mir verraten, dass ich mittels fflush den Puffer leeren kann (-> ausgabe erzwingen).
    // Andernfalls käme die abarbeitung von printf erst "irgendwann später", was wegen des Deadlock nicht mehr ausgeführt werden kann
    fflush(stdout);
    sleep(1);
    pthread_mutex_lock(&mutex2);
    printf("Thread 1 hat beide Ressourcen, nice!\n");

    sleep(1);
    pthread_mutex_unlock(&mutex1);
    pthread_mutex_unlock(&mutex2);
}

void* thread_function2(void* arg) {
    pthread_mutex_lock(&mutex2);
    printf("Thread 2 tut so, als würde er arbeiten..\n");
    fflush(stdout);
    sleep(1);
    pthread_mutex_lock(&mutex1);;
    printf("Thread 2 hat beide Ressourcen, nice!\n");
}

int main() {
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, thread_function1, NULL);
    pthread_create(&thread2, NULL, thread_function2, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    pthread_mutex_destroy(&mutex1);
    pthread_mutex_destroy(&mutex2);

    printf("Jobs done");
    return 0;
}
