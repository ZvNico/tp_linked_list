#include <stdio.h>
#include "src/linked_list/linked_list.h"

int main() {
    int x;
    maillon_t *liste = (maillon_t *) malloc(sizeof(maillon_t));
    liste->x = 5;
    liste->suiv = NULL;
    liste = ajouter_debut(liste, 10);
    liste = ajouter_fin(liste, 8);
    liste = ajouter_fin(liste, 9);
    liste = supprimer_debut(liste, &x);
    liste = supprimer_fin(liste, &x);
    afficher(liste);
    return 0;
}
