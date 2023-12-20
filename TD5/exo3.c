#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverser_chaine(char* str) {
    int taille = strlen(str);
    for (int i = 0; i < taille / 2; i++) {
        char temp = str[i];
        str[i] = str[taille - i - 1];
        str[taille - i - 1] = temp;
    }
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("Usage: %s <file_name>\n", argv[0]);
        return 1;
    }

    char *file_name = argv[1];
    FILE *fp = fopen(file_name, "r+");
    if (!fp) {
        printf("Erreur lors de l'ouverture du fichier.\n");
        return 1;
    }

    fseek(fp, 0, SEEK_END);
    int file_size = ftell(fp);
    int current_pos = file_size;
    rewind(fp);

    char *content = malloc((file_size + 1) * sizeof(char)); // Ajout de 1 pour le caractère de fin de chaîne

    content[0] = '\0';

    while(current_pos != 0) {
        do{
            current_pos--;
            fseek(fp, current_pos, SEEK_SET);
        }while (current_pos && fgetc(fp) != ' ' && fgetc(fp) != '\n');

        char word[100];
        fgets(word, 100, fp);
        inverser_chaine(word);
        strcat(content, word);
        strcat(content, " ");
    }
    rewind(fp);
    fwrite(content, sizeof(char), file_size, fp);
    fclose(fp);

    printf("Nombre de caractères inversés : %d\n", file_size);

    free(content);
    return 0;
}
