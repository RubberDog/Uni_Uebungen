#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
   pid_t pid1;

   string status;

   int sum = 0;

   if (pid1 < 0) {
       printf("oh fork(), it failed");
   }
   if (pid1 == 0) {
       for (int i = 0; i <= 100; i++) {
           sum += i;
       }
       exit(sum % 255);
   } else {
       wait(&status);
       WEXITSTATUS(status);
       printf(status);
}
