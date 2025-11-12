#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t lock;

int counter = 0;

void* thread_nolock(void* arg) {
    for (int i = 0; i < 1000000; i++) {
        counter++;
    }
    printf("Counter: %d\n", counter);
    pthread_exit(NULL);
}

void* thread_lock(void* arg) {
    for (int i = 0; i < 1000000; i++) {
        pthread_mutex_lock(&lock);
        counter++;
        pthread_mutex_unlock(&lock);
    }
    printf("Counter: %d\n", counter);
    pthread_exit(NULL);
}


int main() {
    pthread_t thread1, thread2, thread3, thread4;

    if(pthread_mutex_init(&lock, NULL) != 0) {
        perror("Mutex konnte nicht initialisiert werden");
        return EXIT_FAILURE;
    }

    pthread_create(&thread1, NULL, thread_nolock, "Thread 1 w/o lock\n");
    pthread_create(&thread2, NULL, thread_nolock, "Thread 2 w/o lock\n");

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    
    counter = 0;

    printf("Nolock abgeschlossen\n");

    pthread_create(&thread3, NULL, thread_lock, "Thread 1 with lock\n");
    pthread_create(&thread4, NULL, thread_lock, "Thread 2 with lock\n");

    pthread_join(thread3, NULL);
    pthread_join(thread4, NULL);

    pthread_mutex_destroy(&lock);

    printf("Lock abgeschlossen\n");

    return EXIT_SUCCESS;
}
