#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/fonction-math.h"

int calculer_points(int essais) {
  if(essais == 1) return 10;
  if(essais == 2) return 5;
  if(essais == 3) return 1;
  return 0;
}

int addition() {
  srand(time(NULL));
  int nombre1, nombre2, reponse;
  int essais = 0;

  nombre1 = rand()%100;
  nombre2 = rand()%100;

  printf("%d + %d = ?\n", nombre1, nombre2);

  do {
    printf("Entrez le resultat : ");
    scanf("%d", &reponse);
    essais++;

    if(reponse != nombre1 + nombre2) {
      printf("Faux ! Reessaie\n");
    }
    
    if (essais >= 3) {
      printf("Le resultat correct est : %d\n", nombre1 + nombre2);
      return 0;
    }

  } while(reponse != nombre1 + nombre2 );

  printf("Bravo !\n");
  printf("Nombre d'essais : %d\n", essais);
  
  int points = calculer_points(essais);
  printf("Points gagnés : %d\n", points);
  
  return points;
}

int soustraction() {
  srand(time(NULL));
  int nombre1, nombre2, temp, reponse;
  int essais = 0;

  nombre1 = rand()%100;
  nombre2 = rand()%100;

  if(nombre2 > nombre1) {
    temp = nombre1;
    nombre1 = nombre2;
    nombre2 = temp;
  }

  printf("%d - %d = ?\n", nombre1, nombre2);

  do {
    printf("Entrez le resultat : ");
    scanf("%d", &reponse);
    printf("Vous avez entrez : %d \n",reponse);
    essais++;

    if(reponse != nombre1 - nombre2) {
      printf("Faux ! Reessaie\n");
    }

    if(essais >= 3) {
      printf("Le resultat correct est : %d\n", nombre1 - nombre2);
      return 0;
    }

  } while(reponse != nombre1 - nombre2);

  printf("Bravo !\n");
  printf("Nombre d'essais : %d\n", essais);
  
  int points = calculer_points(essais);
  printf("Points gagnés : %d\n", points);
  
  return points;
}

int multiplication() {
  srand(time(NULL));
  int nombre1, nombre2, reponse;
  int essais = 0;

  nombre1 = rand()%10 + 1;
  nombre2 = rand()%10 + 1;

  printf("%d * %d = ?\n", nombre1, nombre2);

  do {
    printf("Entrez le resultat : ");
    scanf("%d", &reponse);
    printf("Vous avez entrez : %d \n",reponse);
    essais++;

    if(reponse != nombre1 * nombre2) {
      printf("Faux ! Reessaie\n");
    }

    if(essais >= 3) {
      printf("Le resultat correct est : %d\n", nombre1 * nombre2);
      return 0;
    }

  } while(reponse != nombre1 * nombre2);

  printf("Bravo !\n");
  printf("Nombre d'essais : %d\n", essais);
  
  int points = calculer_points(essais);
  printf("Points gagnés : %d\n", points);
  
  return points;
}

int tables_de_multiplication(void){
  srand(time(NULL));
  int nombre, reponse, i;
  printf("Entrez un nombre entre 1 et 10:\n");
  scanf("%d", &nombre);
  if (nombre >= 1 && nombre <= 10){
    for (i = 1; i <= 10; i++){
      printf("%d * %d = %d \n", nombre, i, nombre * i);
    }
    printf("Appuyez sur Entree pour commencer le test\n");
    getchar();
    getchar();
    system("cls");

    for (i = 1; i <= 10; i++){
      printf("%d x %d = ?\n", nombre, i);
      scanf("%d", &reponse);

      if (reponse != nombre * i){
        printf("Perdu ! Vous n'avez pas reussi les 10 questions\n");
        printf("Points gagnés : 0\n");
        return 0;
      }
    }
    printf("Gagne ! Vous avez reussi les 10 questions\n");
    printf("Points gagnés : 10\n");
    return 10;
  }
  else{
    printf("%d n'est pas entre 1 et 10 ", nombre);
  }
  return 0;
}



int division() {
  srand(time(NULL));
  int nombre1, nombre2, reponse;
  int essais = 0;

  nombre2 = rand()%10 + 1;
  nombre1 = nombre2 * (rand()%10 + 1); // division juste

  printf("%d / %d = ?\n", nombre1, nombre2);

  do {
    printf("Entrez le resultat : ");
    scanf("%d", &reponse);
    printf("Vous avez entrez : %d \n",reponse);
    essais++;

    if(reponse != nombre1 / nombre2) {
      printf("Faux ! Reessaie\n");
    }

    if (essais >= 3) {
      printf("Le resultat correct est : %d\n", nombre1 / nombre2);
      return 0;
    }

  } while(reponse != nombre1 / nombre2);

  printf("Bravo !\n");
  printf("Nombre d'essais : %d\n", essais);
  
  int points = calculer_points(essais);
  printf("Points gagnés : %d\n", points);
  
  return points;
}

