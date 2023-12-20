#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


/****************************************
**Cas ou le processus deviens un zombie**
****************************************/


int main() {
    pid_t child_pid = fork();

    if (child_pid == -1) {
        // Échec de la création du processus fils
        perror("fork");
        exit(EXIT_FAILURE);
    }

    if (child_pid == 0) {
        printf("Processus fils : PID=%d\n", getpid());
        sleep(60);
        printf("Le processus fils devient un zombie");
        exit(EXIT_SUCCESS);
    } else {
        printf("Processus parent : PID=%d\n", getpid());
        sleep(65);
        printf("Processus parent terminé\n");
    }

    return 0;
}

/***********************************************
**Cas ou le processus ne deviens pas un zombie**
***********************************************/

/*
int main() {
    pid_t child_pid = fork();

    if (child_pid == -1) {
        perror("fork");
        exit(EXIT_FAILURE);
    }
    if (child_pid == 0) {
        sleep(60); 
    } else {
        printf("Processus parent : Mon PID est %d\n", getpid());
        printf("Processus parent : Mon enfant a le PID %d\n", child_pid);
        wait(NULL);
        exit(0);
    }

    return 0;
}
*/
