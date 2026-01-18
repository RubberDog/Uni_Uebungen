#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main(int argc, char** argv) {
    if (argc != 2) {
        printf("Brudi, nur filepath als parameter.\n");
        return EXIT_FAILURE;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("open()");
        return EXIT_FAILURE;
    }

    if (lseek(fd, 9, SEEK_SET) == (off_t)-1) {
        perror("lseek()");
        close(fd);
        return EXIT_FAILURE;
    }

    unsigned char c;
    ssize_t n = read(fd, &c, 1);
    if (n == 0) {
        printf("Datei ist zu kurz.\n");
        close(fd);
        return EXIT_FAILURE;
    }

    printf("%u\n", (unsigned)c);
    printf("Entspricht: %c", (char)c);

    close(fd);
    return EXIT_SUCCESS;
}

