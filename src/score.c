#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../include/score.h"

void enregistrer_score(char nom[], int score){
    FILE*fichier = fopen("score.txt", "a");

    if (fichier == NULL) {
        printf("Erreur lors de l'ouverture du fichier\n");
        return;
    }

    time_t t = time(NULL);
    struct tm *tm = localtime(&t);

    fprintf(fichier, "Nom : %s | Points : %d | Date et Heure : %02d/%02d/%04d %02d:%02d:%02d\n",
            nom,
            score,
            tm->tm_mday,
            tm->tm_mon + 1,
            tm->tm_year + 1900,
            tm->tm_hour,
            tm->tm_min,
            tm->tm_sec);
    fclose(fichier);
}

int lire_score_joueur(char nom[]) {
    FILE *fichier = fopen("score.txt", "r");
    char ligne[200];
    char nom_fichier[25];
    int score_fichier;
    int score_max = 0;
    
    if (fichier == NULL) {
        return 0; 
    }

    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {

        if (sscanf(ligne, "Nom : %24s | Points : %d", nom_fichier, &score_fichier) == 2) {
            if (strcmp(nom_fichier, nom) == 0) {
                if (score_fichier > score_max) {
                    score_max = score_fichier;
                }
            }
        }
    }
    fclose(fichier);
    return score_max;  
}
