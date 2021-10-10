#ifndef TP_LINKED_LIST_LINKED_LIST_H
#define TP_LINKED_LIST_LINKED_LIST_H

#include <stdlib.h>
#include <stdio.h>

typedef struct maillon {
    int x;
    struct maillon *suiv;
} maillon_t;

maillon_t *ajouter_debut(maillon_t *pliste, int val);

maillon_t *ajouter_fin(maillon_t *pliste, int val);

maillon_t *rechercher(maillon_t *pliste, int val);

maillon_t *supprimer_debut(maillon_t *pliste, int *pval);

maillon_t *supprimer_fin(maillon_t *pliste, int *pval);

maillon_t *supprimer_val(maillon_t *pliste, int val);

void afficher(maillon_t *pliste);

#endif //TP_LINKED_LIST_LINKED_LIST_H
