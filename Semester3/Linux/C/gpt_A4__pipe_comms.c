#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>

int main() {
    int fd[2];
    pid_t pid;
    char message[] = "Hallo, Matti!";
    char buffer[100];

    if (pipe(fd) == -1) {
        perror("pipe() failed!");
        exit(1);
    }

    pid = fork();

    if (pid < 0) {
        perror("Oh fork! fork() failed!");
        exit(1);
    }

    if (pid == 0) {
        close(fd[1]);
        read(fd[0], buffer, sizeof(buffer));
        printf("Sohn tut so als könne er folgendes lesen: \"%s\"\n", buffer);
        close(fd[0]);
        exit(0);
    } else {
        close(fd[0]);
        write(fd[1], message, strlen(message) + 1);
        close(fd[1]);
        wait(NULL);
        printf("Nachricht gesendet. Sohn ist feddisch.\n");
    }
    return 0;
}
