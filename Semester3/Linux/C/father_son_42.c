#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

pid_t pid;

int main() {
    pid = fork();

    if (pid < 0) {
        perror("fork()");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        int counter = 1;
        for (int i = 0; counter <= 42; i++) {
            if (i % 3 == 0 || i == 0) {
                printf("Sohn: Durchlauf %d, Zahl %d\n", counter, i);
                counter++;
            }
        }
     exit(EXIT_SUCCESS);
    } else {
        wait(NULL);
        int counter = 1;
        for (int i = 0; counter <=42; i++) {
            if (i % 2 == 0 || i == 0) {
                printf("Vater: Durchlauf %d, Zahl %d\n", counter, i);
                counter++;
            }
        }
    }
    return 0;
}
