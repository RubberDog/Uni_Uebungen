#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <pthread.h>
#include <string.h>

pthread_mutex_t lock;

pthread_t t1, t2, t3;

void* thread_func(void* arg) {
    int counter = 0;
    char* name = (char*) arg;
    int timer;
    if (strcmp(name, "Thread 1") == 0) {
        timer = 1;
    } else if (strcmp(name, "Thread 2") == 0) {
        timer = 2;
    } else if (strcmp(name, "Thread 3") == 0) {
        timer = 3;
    }
    
    for (int i = 0; i < 10; i++) {
        pthread_mutex_lock(&lock);
        printf("Name: %s - counter: %d\n", name, counter);
        pthread_mutex_unlock(&lock);
        counter++;
        sleep(timer);
    }
    pthread_exit(NULL);
}

int main() {
    pthread_mutex_init(&lock, NULL);

    pthread_create(&t1, NULL, thread_func, "Thread 1");
    pthread_create(&t2, NULL, thread_func, "Thread 2");
    pthread_create(&t3, NULL, thread_func, "Thread 3");

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);
    pthread_join(t3, NULL);

    pthread_mutex_destroy(&lock);

    return 0;
}
