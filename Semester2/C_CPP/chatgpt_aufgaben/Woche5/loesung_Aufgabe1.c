#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "geheim";
    char eingabe[200] = " ";
    while (strcmp(password, eingabe) != 0) {
        for (int i = 1; i <= 3; i++) {
            printf("Nenne mir bitte das Passwort: \n");
            fgets(eingabe, sizeof(eingabe), stdin);
            eingabe[strcspn(eingabe, "\n")] = '\0';
            if (strcmp(password, eingabe) != 0) {
                printf("Leider falsch. Das war Versuch %d\n\n", i);
            } else {
                printf("Zugang gewährt.");
                return 0;
            }
        }
        printf("Zugang verweigert.");
    }
}
