#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

pid_t pid;

int main() {
    pid = fork();

    if (pid < 0) {
        perror("fork()");
        exit(1);
    } else if (pid == 0) {
        execlp("ls", "ls", "-l", NULL);
        perror("execlp()");
        exit(1);
    } else {
        wait(NULL);
        printf("ls ist fertig.\n");
    }
    return 0;
}
