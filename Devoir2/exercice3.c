#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define SEUIL 1 // Seuil pour la recherche séquentielle

int maxi(int i, int j) {
    return (i > j) ? i : j;
}

int max(int* tab, int debut, int fin) {
    int maximum = tab[debut];
    for (int i = debut + 1; i <= fin; i++) {
        if (tab[i] > maximum) {
            maximum = tab[i];
        }
    }
    return maximum;
}

int max_parallele(int* tab, int debut, int fin) {
    if (fin - debut + 1 <= SEUIL) {
        return max(tab, debut, fin);
    } else {
        int mid = (debut + fin) / 2;

        pid_t pid1, pid2;
        int status1, status2;
        int max1, max2;

        pid1 = fork();

        switch (pid1) {
            case -1:
                perror("Erreur lors de la création du premier fils");
                exit(EXIT_FAILURE);
            case 0:
                max1 = max_parallele(tab, debut, mid);
                exit(max1);
            default:
                pid2 = fork();
                switch (pid2) {
                    case -1:
                        perror("Erreur lors de la création du deuxième fils");
                        exit(EXIT_FAILURE);
                    case 0:
                        max2 = max_parallele(tab, mid + 1, fin);
                        exit(max2);
                    default:
                        waitpid(pid1, &status1, 0);
                        waitpid(pid2, &status2, 0);
                        
                        max1 = WEXITSTATUS(status1);
                        max2 = WEXITSTATUS(status2);
                        
                        return maxi(max1, max2);
                }
        }
    }
}

int main() {
    int taille = 9;
    int tableau[9] = {1, 5, 4, 3, 2, 6, 8, 7, 9};
    int maximum = max_parallele(tableau, 0, taille - 1);

    printf("Le maximum du tableau est : %d\n", maximum);

    return 0;
}
