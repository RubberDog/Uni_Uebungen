#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
	pid_t pid;
	
	// Neuer Prozess wird erzeugt
	pid = fork();

	if (pid < 0) {
		// Fehler beim erzeugen
		perror("Fehler bei fork()");
		exit(1);
	}

	if (pid == 0) {
		// Kindprozess
		for (int i = 1; i <= 1000; i++) {
			if (i % 2 != 0) {
				printf("Sohn: %d\n", i);
			}
		}
		exit(0);
	} else {
		// Vater
		for (int i = 0; i <= 1000; i++)
		{
			if (i % 2 == 0) {
				printf("Vater: %d\n", i);
			}
		}
		wait(NULL);
		printf("Vater: Sohnprozess ist beendet. Vater macht auch den Abflug.\n");
	}
	return 0;
}

