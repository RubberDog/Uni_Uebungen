#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>

int counter = 0;

pthread_t t1, t2;

pthread_mutex_t lock;

void* thread_func(void* arg) {
    char* name = (char*) arg;
    for ( int i = 0; i < 11; i++) {
        pthread_mutex_lock(&lock);
        printf("%s: %d\n", name, counter);
        counter++;
        pthread_mutex_unlock(&lock);
    }
    return 0;
}

int main() {
    pthread_mutex_init(&lock, NULL);

    pthread_create(&t1, NULL, thread_func, "Thread 1");
    pthread_create(&t2, NULL, thread_func, "Thread 2");

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Done\n");
    exit(EXIT_SUCCESS);
}
