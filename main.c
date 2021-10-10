#include <stdio.h>
#include "src/linked_list/linked_list.h"

int main() {
    maillon_t *liste = (maillon_t *) malloc(sizeof(maillon_t));
    liste->x = 5;
    liste->suiv = NULL;
    liste = ajouter_debut(liste, 10);
    liste = ajouter_fin(liste, 8);
    afficher(liste);
    return 0;
}
