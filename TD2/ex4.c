#include <stdio.h>
#include <stdlib.h>

struct complexe{
	float x;
	float y;
};

union valeur{
	int entier;
	float reel;
	struct complexe complexe;
};

enum genre {entier, reel, complexe};

typedef struct nombre{
	enum genre  type;
	union valeur valeur;
}nombre ;


nombre *Saisir_Nombre()
{
    char type = '7';
    nombre *Nombre = malloc(sizeof(nombre));
    printf("Entrez le type de votre nombre (1 pour entier, 0 pour reel, 2 pour complexe) : ");
    type = getchar();
    switch(type){
        case '0' : ;
            Nombre->type = reel;
            printf("\nEntrez votre reel : ");
            scanf("%f", &Nombre->valeur.reel);
            break;
        case '1' : ;
            Nombre->type = entier;
            printf("\nEntrez votre entier : ");
            scanf("%d", &Nombre->valeur.entier); // Use %d for integers
            break;
        case '2' : ;
            Nombre->type = complexe;
            printf("\nEntrez la partie entiere : ");
            scanf("%f", &Nombre->valeur.complexe.x);
            printf("\nEntrez la partie imaginaire : ");
            scanf("%f", &Nombre->valeur.complexe.y);
            break;
    }
    return Nombre;
}



void Afficher_Nombre(nombre* n)
{
    switch(n->type){
        case entier : ;
            printf("%d", n->valeur.entier);
            break;
        case reel : ;
            printf("%f", n->valeur.reel);
            break;
        case complexe : ;
            if(n->valeur.complexe.y < 0){
                printf("%d%di",n->valeur.complexe.x, n->valeur.complexe.y);
            }
            if(n->valeur.complexe.y == 0){
                printf("%d",n->valeur.complexe.x);
            }
            printf("%d+%di",n->valeur.complexe.y, n->valeur.complexe.y);
            break;
    }
}


//Bonus

typedef struct etudiant{
    char nom;
    char prenom;
    int cle;
    struct etudiant* suivant;

}etu;

void Ajouter_Etu(etu *list_etu)
{
    if(list_etu == NULL){
        printf("Entrez le nom de famille de l'etudiant : ");
        scanf("%s", &list_etu->nom);
        printf("Entrez le prenom de l'etudiant : ");
        scanf("%s", &list_etu->prenom);
        printf("Entrez la cle de l'etudiant : ");
        scanf("%d", &list_etu->cle);
    }


    else{
        while(list_etu->suivant != NULL){
            list_etu = list_etu->suivant;
        }
        printf("Entrez le nom de famille de l'etudiant : ");
        scanf("%s", &list_etu->suivant->nom);
        printf("Entrez le prenom de l'etudiant : ");
        scanf("%s", &list_etu->suivant->prenom);
        printf("Entrez la cle de l'etudiant : ");
        scanf("%d", &list_etu->suivant->cle);
    }
}

 void Afficher_etu(etu *list_etu)
 {
    if(list_etu == NULL){
        printf("\nIl n'y a aucun etudiant");
        return;
    }

    while(list_etu->suivant != NULL){
        printf("\nEtudiant : %s %s | cle : %d", list_etu->prenom, list_etu->nom, list_etu->cle);
        list_etu = list_etu->suivant;
    }
 }

//fin du bonus

void main()
{
    nombre *egbiho = malloc(sizeof(nombre));
    egbiho = Saisir_Nombre();
    Afficher_Nombre(egbiho);
}





