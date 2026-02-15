#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <pthread.h>

pid_t pid;

int main(int argc, char** argv) {
    pid = fork();

    int number = atoi(argv[1]);
    int status;

    if (pid < 0) {
        perror("fork() this shit");
        exit(EXIT_FAILURE);
    } else if (pid == 0) {
        int result = 0;
        for (int i = 1; i <= number; i++) {
            result += i;
        }
        result = result % 256;
        exit(result);
    } else {
        wait(&status);
        printf("Sohn beendet. return-value ist %d\n", WEXITSTATUS(status));
    }
    return 0;
}
