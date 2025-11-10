#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    pid = fork();

    if (pid < 0) {
        perror("Fehler bei fork()!");
        exit(1);
    }

    if (pid == 0) {
        for (int i = 1; i <= 1000; i++) {
            if (i % 2 != 0) {
                printf("I IZ SON, YET I AM DISAPPOINT! #%d\n", i);
            }
        }
        exit(0);
    } else {
        for (int i = 0; i <= 1000; i++)
        {
            if (i % 2 == 0) {
                printf("I IZ FATHER, SON STOOPID - HELP! #%d\n", i);
            }
        }
        wait(NULL);
        printf("Father hier - Son dead, that's it. Bye\n");
    }
    return 0;
}
