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

int soustraction(int *essais){
  int NbA;
  int NbB;
  int resultat;
  int reponse;
  int temp;

  NbA = rand() % 101;
  NbB = rand() % 101;

  if (NbA > NbB){
    temp = NbA;
    NbA = NbB;
    NbB = temp;
  }

  resultat = NbB - NbA;

  printf("%d - %d = ?\n", NbB, NbA);
  printf("Entrez le resultat : ");

  do{
    scanf("%d", &reponse);
    printf("Vous avez entré %d\n", reponse);
    (*essais)++;
  } while (resultat != reponse);

  printf("Bravo\n");
  printf("Vous avez réussi en : %d essai(s)\n", *essais);

  return 0;
}


