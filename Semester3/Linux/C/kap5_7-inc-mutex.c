#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

int counter = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void increment_Count() {
    ++counter;
    printf("Habe Counter auf %d erhöht\n", counter);
}

int getCount() {
    return counter;
}

void* thread_function(void* arg) {
    pthread_mutex_lock(&mutex);
    for (int i = 0; i < 20; i++) {
        increment_Count();
        printf("Counterstand: %d\n", getCount());
    }
    pthread_mutex_unlock(&mutex);
}

int main() {
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, thread_function, "Thread1");
    pthread_create(&thread2, NULL, thread_function, "Thread2");

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    pthread_mutex_destroy(&mutex);

    printf("Jobs done");
    return 0;
}

/*
Habe Counter auf 1 erhöht
Counterstand: 1
Habe Counter auf 2 erhöht
Counterstand: 2
Habe Counter auf 3 erhöht
Counterstand: 3
Habe Counter auf 4 erhöht
Counterstand: 4
Habe Counter auf 5 erhöht
Counterstand: 5
Habe Counter auf 6 erhöht
Counterstand: 6
Habe Counter auf 7 erhöht
Counterstand: 7
Habe Counter auf 8 erhöht
Counterstand: 8
Habe Counter auf 9 erhöht
Counterstand: 9
Habe Counter auf 10 erhöht
Counterstand: 10
Habe Counter auf 11 erhöht
Counterstand: 11
Habe Counter auf 12 erhöht
Counterstand: 12
Habe Counter auf 13 erhöht
Counterstand: 13
Habe Counter auf 14 erhöht
Counterstand: 14
Habe Counter auf 15 erhöht
Counterstand: 15
Habe Counter auf 16 erhöht
Counterstand: 16
Habe Counter auf 17 erhöht
Counterstand: 17
Habe Counter auf 18 erhöht
Counterstand: 18
Habe Counter auf 19 erhöht
Counterstand: 19
Habe Counter auf 20 erhöht
Counterstand: 20
Habe Counter auf 21 erhöht
Counterstand: 21
Habe Counter auf 22 erhöht
Counterstand: 22
Habe Counter auf 23 erhöht
Counterstand: 23
Habe Counter auf 24 erhöht
Counterstand: 24
Habe Counter auf 25 erhöht
Counterstand: 25
Habe Counter auf 26 erhöht
Counterstand: 26
Habe Counter auf 27 erhöht
Counterstand: 27
Habe Counter auf 28 erhöht
Counterstand: 28
Habe Counter auf 29 erhöht
Counterstand: 29
Habe Counter auf 30 erhöht
Counterstand: 30
Habe Counter auf 31 erhöht
Counterstand: 31
Habe Counter auf 32 erhöht
Counterstand: 32
Habe Counter auf 33 erhöht
Counterstand: 33
Habe Counter auf 34 erhöht
Counterstand: 34
Habe Counter auf 35 erhöht
Counterstand: 35
Habe Counter auf 36 erhöht
Counterstand: 36
Habe Counter auf 37 erhöht
Counterstand: 37
Habe Counter auf 38 erhöht
Counterstand: 38
Habe Counter auf 39 erhöht
Counterstand: 39
Habe Counter auf 40 erhöht
Counterstand: 40
Jobs done%   
*/
