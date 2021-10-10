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
    maillon_t *temp = pliste;
    while (temp != NULL) {
        if (temp->x == val) {
            return temp;
        }
        temp = temp->suiv;
    }
    return pliste;
}

maillon_t *supprimer_debut(maillon_t *pliste, int *pval) {
    maillon_t *temp = pliste->suiv;
    *pval = pliste->x;
    free(pliste);
    return temp;
}

maillon_t *supprimer_fin(maillon_t *pliste, int *pval) {
    if (pliste == NULL) {
        return pliste;
    }
    maillon_t *temp = pliste;
    while (temp->suiv->suiv != NULL) {
        temp = temp->suiv;
    }
    *pval = temp->suiv->x;
    free(temp->suiv);
    temp->suiv = NULL;
    return pliste;
}

maillon_t *supprimer_val(maillon_t *pliste, int val) {
    if (pliste == NULL) {
        return pliste;
    }
    maillon_t *temp = pliste;
    maillon_t *temp_to_free = pliste;
    while (temp->suiv != NULL) {
        if (temp->suiv->x == val) {
            temp_to_free = temp->suiv;
            if (temp->suiv->suiv != NULL) {
                temp->suiv = temp->suiv->suiv;
            } else {
                temp->suiv = NULL;
            }
            free(temp_to_free);
            return pliste;
        }
        temp = temp->suiv;
    }
    return pliste;
}

void afficher(maillon_t *pliste) {
    if (pliste != NULL) {
        printf("%d ", pliste->x);
        afficher(pliste->suiv);
    } else {
        printf("\n");
    }
}
