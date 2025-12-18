#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

pthread_t thread1, thread2, thread3;

struct threadarg {
    int startvalue;
};

void* thread_function(void* arg) {
    struct threadarg* t = (struct threadarg*) arg;
    for (int i = t->startvalue; i <= t->startvalue + 5; i++) {
        printf("Zahl; %d\n", i);
    }
}

int main() {
    struct threadarg t1 = {10};
    struct threadarg t2 = {20};
    struct threadarg t3 = {30};

    pthread_create(&thread1, NULL, thread_function, &t1);
    pthread_create(&thread2, NULL, thread_function, &t2);
    pthread_create(&thread3, NULL, thread_function, &t3);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);
    pthread_join(thread3, NULL);
}
