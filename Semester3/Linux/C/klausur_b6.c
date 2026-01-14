#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    pid = fork();
    if (pid < 0) {
        perror("fork()");
    }

    if (pid == 0) {
        for (int i = 1; i <= 1000; i+=2) {
            printf("Son: Number %d\n", i);
        }
        exit(0);
    } else {
        for (int i = 0; i <= 1000; i+=2) {
            printf("Father: Number %d\n", i);
        }
        wait(NULL);
    }
    printf("Son done, father done waiting, bye!");
    exit(0);
}
