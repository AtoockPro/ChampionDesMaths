#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "include/fonction-math.h"
#include "include/score.h"

int main(){
    srand((unsigned int)time(NULL));
    char nom[24];
    int score = 0;
    int choix = 6;
    
  
    printf("+-----------------------------------+\n");
    printf("| Bienvenue au jeu mathematique !   |\n");
    printf("+-----------------------------------+\n");
    printf("Quel est votre nom ? ");
    scanf("%24s", nom);

    int score_existant = lire_score_joueur(nom);
    printf("+-----------------------------------+\n"); 
    printf("| Bonjour %s !                    |\n", nom);
    printf("+-----------------------------------+\n"); 
    
    if (score_existant > 0) {
        printf("+-----------------------------------+\n");
        printf("| Score precedent : %d points      |\n", score_existant);
        printf("| Vous reprenez depuis votre score  |\n");
        printf("+-----------------------------------+\n");
        score = score_existant;
    } else {
        printf("+-----------------------------------+\n");
        printf("| Nouveau joueur - Score : 0        |\n");
        printf("+-----------------------------------+\n");
    }


    do {
        printf("+-----------------------------------+\n");
        printf("| Score actuel : %d points         |\n", score);
        printf("+-----------------------------------+\n");
        printf("+-----------------------------------+\n");
        printf("| 1:Addition                        |\n"
               "| 2:Soustraction                    |\n"
               "| 3:Multiplication                  |\n"
               "| 4:Tables des multiplications      |\n"
               "| 5:Division                        |\n"
               "| 6:Conversion de temps             |\n"
               "| 0:Sortir du jeu                   |\n"
               "+-----------------------------------+\n");
        printf("Quel est votre choix ? ");
        scanf("%d", &choix);
        
        int points = 0;
        
        switch(choix) {
            case 1:
                printf("\n=== Addition ===\n");
                points = addition();
                score += points;
                printf("Score total : %d points\n\n", score);
                break;
            case 2:
                printf("\n=== Soustraction ===\n");
                points = soustraction();
                score += points;
                printf("Score total : %d points\n\n", score);
                break;
            case 3:
                printf("\n=== Multiplication ===\n");
                points = multiplication();
                score += points;
                printf("Score total : %d points\n\n", score);
                break;
            case 4:
                printf("\n=== Tables des multiplications ===\n");
                points = tables_de_multiplication();
                score += points;
                printf("Score total : %d points\n\n", score);
                break;
            case 5:
                printf("\n=== Division ===\n");
                points = division();
                score += points;
                printf("Score total : %d points\n\n", score);
                break;
            case 6:
                printf("\n=== Conversion de temps ===\n");
                points = conversion_temps();
                score += points;
                printf("Score total : %d points\n\n", score);
                break;
            case 0:
                printf("\n=== Fin du jeu ===\n");
                printf("Au revoir %s !\n", nom);
                printf("Score final : %d points\n", score);
                enregistrer_score(nom, score);
                printf("Votre score a ete enregistre. Merci d'avoir joue !\n");
                printf("Appuyez sur Entrée pour quitter...");
                getchar();
                getchar();
                break;
            default:
                printf("Choix invalide !\n\n");
        }
    }while(choix != 0);
    
    return 0;
}





