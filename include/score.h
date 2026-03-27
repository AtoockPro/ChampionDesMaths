#ifndef SCORE_H
#define SCORE_H

/* * Enregistre le nom, le score et la date actuelle dans score.txt
 * nom : chaîne de caractères représentant le joueur
 * score : entier représentant le score obtenu
 */
void enregistrer_score(char nom[], int score);

/* * Lit le score existant d'un joueur dans score.txt
 * nom : chaîne de caractères représentant le joueur
 * retourne : le score du joueur s'il existe, 0 sinon
 */
int lire_score_joueur(char nom[]);

#endif

