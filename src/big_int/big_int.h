#ifndef TP_LINKED_LIST_BIG_INT_H
#define TP_LINKED_LIST_BIG_INT_H

#include <stdlib.h>
#include <stdio.h>

typedef struct big_int_node {
    int chiffres[5];
    struct big_int_node *next;
} BIN;

BIN *init_bin();

void push_int(BIN *bin, int x);

BIN *addition_bin(BIN *bin1, BIN *bin2);

void print_bin(BIN *bin);

#endif //TP_LINKED_LIST_BIG_INT_H
