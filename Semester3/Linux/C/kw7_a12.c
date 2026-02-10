#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Keine Frage, keine Antwort.\n");
        exit(EXIT_FAILURE);
    }

    char antwort[10];

    while (true) {
        printf("%s (Ja / Nein): ", argv[1]);
        scanf("%s", antwort);

        for (int i = 0; antwort[i] != '\0'; i++) {
            antwort[i] = tolower((unsigned char)antwort[i]);
        }

        if (strcmp(antwort, "ja") == 0) {
            return 0;
        } else if (strcmp(antwort, "nein") == 0) {
            return 1;
        } else {
            printf("Versuch's nochmal!\n");
        }
    }
    return 0;
}
