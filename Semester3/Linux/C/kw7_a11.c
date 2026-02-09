#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>

int main(int argc, char** argv) {
    printf("Mein Name ist %s, es gibt %d Parameter.\n", argv[0], argc-1);
    for (int i = 1; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
    }
    return 0;
}
