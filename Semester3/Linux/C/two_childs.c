#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid1, pid2;

    pid1 = fork();
    if (pid1 < 0) {
        printf("oh fark, fork() failed\n");
    }
    if (pid1 == 0){
        for (int i = 0; i < 10; i++) {
            printf("Ich bin Kind1, #%d\n", i);
        }
    } else {
        pid2 = fork();
        if (pid2 < 0) {
            printf("Oh fork, fork() failed\n");
        }
        if (pid2 == 0) {
            for (int i = 0; i < 10; i++) {
                printf("Ich bin Kind2, #%d\n", i);
            }
        } else {
            waitpid(pid1, NULL, 0);
            printf("Kind 1 beendet.\n");
            waitpid(pid2, NULL, 0);
            printf("Kind 2 beendet.\n");
        }
    }
}
