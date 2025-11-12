#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

pthread_t thread1, thread2;

void* thread_func(void* args) {
   for (int i = 1; i < 6; i++) {
        printf("I can only count to %d\n", i);
    }
    pthread_exit(NULL);
}

void main() {

    pthread_create(&thread1, NULL, thread_func, NULL);
    pthread_join(thread1, NULL);
    printf("Thread1 beendet!\n");

    pthread_create(&thread2, NULL, thread_func, NULL);
    pthread_join(thread2, NULL);
    printf("Thread2 beendet!\n");

}
