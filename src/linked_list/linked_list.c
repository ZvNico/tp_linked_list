#include "linked_list.h"

maillon_t *ajouter_debut(maillon_t *pliste, int val) {
    maillon_t *maillon = (maillon_t *) malloc(sizeof(maillon_t));
    maillon->x = val;
    maillon->suiv = pliste;
    return maillon;
}

maillon_t *ajouter_fin(maillon_t *pliste, int val) {
    maillon_t *maillon = (maillon_t *) malloc(sizeof(maillon_t));
    maillon->x = val;
    maillon->suiv = NULL;

    if (pliste == NULL) {
        return maillon;
    }

    maillon_t *temp = pliste;
    while (temp->suiv != NULL) {
        temp = temp->suiv;
    }
    temp->suiv = maillon;
    return pliste;
}

maillon_t *rechercher(maillon_t *pliste, int val) {

}

maillon_t *supprimer_debut(maillon_t *pliste, int *pval) {}

maillon_t *supprimer_fin(maillon_t *pliste, int *pval) {}

maillon_t *supprimer_val(maillon_t *pliste, int val) {}

void afficher(maillon_t *pliste) {
    if (pliste != NULL) {
        printf("%d ", pliste->x);
        afficher(pliste->suiv);
    } else {
        printf("\n");
    }
}
