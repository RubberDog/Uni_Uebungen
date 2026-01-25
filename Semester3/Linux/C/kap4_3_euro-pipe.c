#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int fd[2];
    pid_t pid1, pid2;
    double message = 12.32;
    double received;

    if (pipe(fd) == -1) {
        perror("pipe()");
        exit(1);
    }

    pid1 = fork();

    if (pid1 < 0) {
        perror("fork()");
        exit(1);
    } else if (pid1 == 0) {
        close(fd[0]);
        write(fd[1], &message, sizeof(message));
        printf("Hab mein value %lf gesendet!\n", message);
        close(fd[1]);
        exit(0);
    } else {
        pid2 = fork();
        if (pid2 < 0) {
            perror("fork()");
            exit(1);
        }
    }

    if (pid2 == 0) {
        close(fd[1]);
        read(fd[0], &received, sizeof(message));
        close(fd[0]);
        received = received + (received * 0.16);
        printf("Mit Umsatzsteuer macht dat %.2f\n", received);
        exit(0);
    }

    waitpid(pid1, NULL, 0);
    waitpid(pid2, NULL, 0);
    return 0;
}
