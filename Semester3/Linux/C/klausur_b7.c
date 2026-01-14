#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

pthread_mutex_t lock;

void* thread_func(void* arg) {
    char* name = (char*) arg;

    for (int i = 0; i < 10; i++) {
        pthread_mutex_lock (&lock);
        printf("%s: Durchlauf Nummer %d\n", name, i);
        pthread_mutex_unlock(&lock);
    }
    pthread_exit(NULL);
}


int main() {
    pthread_t thread1, thread2;

    if (pthread_mutex_init(&lock, NULL) != 0) {
        perror("mutex: ");
        return 1;
    }

    pthread_create(&thread1, NULL, thread_func, "Thread1");
    pthread_create(&thread2, NULL, thread_func, "Thread2");

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    pthread_mutex_destroy(&lock);

    printf("Beide Threads fertig.\n");
    return 0;
}
