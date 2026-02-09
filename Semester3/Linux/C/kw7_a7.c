#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

pthread_mutex_t lock;
pthread_t t1, t2;
int counter = 0;

void* thread_func(void* arg) {
    char* name = (char*) arg;
    while (true) {

        pthread_mutex_lock(&lock);
        printf("Name: %s, run %d\n", name, counter);
        sleep(1);
        counter++;
        pthread_mutex_unlock(&lock);
    }

}

int main() {
    pthread_create(&t1, NULL, thread_func, "Thread1");
    pthread_create(&t2, NULL, thread_func, "Thread2");

    pthread_join(t1, NULL);
    pthread_join(t2, NULL);

    printf("Threads done, bye\n");

    return 0;
}
