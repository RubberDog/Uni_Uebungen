#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;
    int status;

    pid = fork();

    if (pid < 0) {
        perror("Failed at fork().");
        exit(1);
    }

    if (pid == 0) {
        int sum = 0;
        for (int i = 1; i <= 100; i++) {
            sum += i;
        }
        exit(sum % 255);
    } else {
        wait(&status);
        printf("Ich fühle eine Zahl.. sie lautet %d.\n", WEXITSTATUS(status));
    }
    return 0;
}
