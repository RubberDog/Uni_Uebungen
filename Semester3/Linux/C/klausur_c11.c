#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char** argv) {
    if (argc != 3) {
        printf("Es müssen ZWEI Argumente übergeben werden!\n");
        printf("./linkymclinkface /path/to/newdir /path/to/symlink/location\n");
        printf("Mkay?\n");
        exit(1);
    }

    if (mkdir(argv[1], 0755) != 0) {
        perror("mkdir()");
        exit(EXIT_FAILURE);
    }

    if (symlink(argv[1], argv[2]) != 0) {
        perror("symlink()");
        exit(EXIT_FAILURE);
    }
    return 0;
}
