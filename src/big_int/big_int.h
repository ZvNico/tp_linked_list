#ifndef TP_LINKED_LIST_BIG_INT_H
#define TP_LINKED_LIST_BIG_INT_H

#include <stdlib.h>
#include <stdio.h>

typedef struct big_int_node {
    short int chiffres[5];
    struct big_int_node *next;
} BIN;

BIN *init_bin();

void push_int(BIN *bin, int x, int i);

void print_bin(BIN *bin);

#endif //TP_LINKED_LIST_BIG_INT_H
