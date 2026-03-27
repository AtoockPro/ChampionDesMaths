#include <stdio.h>
#include "affichage.h"


void afficher_menu(void)
{
    int choix= -1 ;

    while (choix != 0) {
        printf("+---------------------------------------+\n");
        printf("|1 : Addition                           |\n");
        printf("|2 : Soustraction                       |\n");
        printf("|3 : Multiplication                     |\n");
        printf("|4 : Tables des multiplications         |\n");
        printf("|5 : Divisions                          |\n");
        printf("|0 : Sortir du jeu                      |\n");
        printf("+---------------------------------------+\n");
        printf("\nQuel est votre choix ? ");;

        scanf("%d", &choix);


        switch (choix) {
            case 1: printf("Addition/n");Addition();break;
            case 2: printf("Soustraction/n");Soustraction(); break;
            case 3: printf("Multiplication/n");Multiplication(); break;
            case 4: printf("Tables des multiplications/n");Tables_des_multiplications(); break;
            case 5: printf("Divisions/n");Divisions(); break;
            case 0: printf("Merci de votre visite\n"); break;
            default: printf("Choix invalide, veuillez réessayer.\n\n");

        }
    }
    
}