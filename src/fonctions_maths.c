#include <stdio.h>
#include "fonctions_maths.h"


int Addition(void)
{
    srand(time(NULL));

    int nombre1 = rand() % 101;
    int nombre2 = rand() % 101;
    int reponse;

    printf("%d + %d = ? /n", nombre1, nombre2);
    printf("Entrez le résultat/n");
    scanf("%d", &reponse);
    printf("Vous avez entré %d ! /n", reponse);
    


    if (reponse == (nombre1 + nombre2)){
        printf("Bravo /n");
    } else {
        printf("raté /n");
    }



}



int Multiplication(void)
{
    srand(time(NULL));

    int nombre1 = rand() % 10+1;
    int nombre2 = rand() % 10+1;
    int reponse;

    printf("%d x %d = ? /n", nombre1, nombre2);
    printf("Entrez le résultat/n");
    scanf("%d", &reponse);
    printf("Vous avez entré %d ! /n", reponse);
    


    if (reponse == (nombre1 * nombre2)){
        printf("Bravo /n");
    } else {
        printf("raté /n");
    }



}


int Soustraction(void)
{
    srand(time(NULL));

    int nombre1 = rand() % 101;
    int nombre2 = rand() % 101;
    int nombre3 = 0;
    int reponse;


    if (nombre1 < nombre2){
        nombre3 = nombre1;
        nombre1 = nombre2;
        nombre2 = nombre3;
    }


    printf("%d x %d = ? /n", nombre1, nombre2);
    printf("Entrez le résultat/n");
    scanf("%d", &reponse);
    printf("Vous avez entré %d ! /n", reponse);
    


    if (reponse == (nombre1 * nombre2)){
        printf("Bravo /n");
    } else {
        printf("raté /n");
    }



}


