#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

pthread_mutex_t lock;

void* thread_func1(void* arg) {
	for (int i = 0; i < 5; i++) {
		pthread_mutex_lock(&lock);
		printf("Thread A: %d - übrigens, ich hasse C.\n", i);
		pthread_mutex_unlock(&lock);
		sleep(1);
	}
	return NULL;
}

void* thread_func2(void* arg) {
	for (int i = 0; i < 5; i++) {
		pthread_mutex_lock(&lock);
		printf("Thread B: %d - übrigens, ich hasse C.\n", i);
		pthread_mutex_unlock(&lock);
		sleep(1);
	}
	return NULL;
}

int main() {
	pthread_t t1, t2;

	pthread_mutex_init(&lock, NULL);

	pthread_create(&t1, NULL, thread_func1, NULL);
	pthread_create(&t2, NULL, thread_func2, NULL);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	pthread_mutex_destroy(&lock);

	printf("Jobs done");
	return 0;
}

