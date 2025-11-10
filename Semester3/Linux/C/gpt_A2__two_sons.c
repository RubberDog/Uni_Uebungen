#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t son1, son2;

    son1 = fork();

    if (son1 < 0) {
        perror("Failed at fork()");
        exit(1);
    }
    
    if (son1 == 0) {
        for (int i = 1; i <= 10; i++) {
            printf("Ich bin Kind1! Durchlauf %d\n", i);
            sleep(1);
        }
        exit(0);
    } else {
        son2 = fork();
        if (son2 < 0) {
            perror("Failed at fork()!");
            exit(1);
        }
    }

    if (son2 == 0) {
        for (int i = 1; i <= 10; i++) {
            printf("Ich bin Kind2! Durchlauf %d\n", i);
            sleep(2);
        }
        exit(0);
    }

    waitpid(son1, NULL, 0);
    printf("Kind 1 (PID %d) ist beendet.\n", son1);
    waitpid(son2, NULL, 0);
    printf("Kind 2 (PID %d) ist beendet.\n", son2);
    return 0;
}
