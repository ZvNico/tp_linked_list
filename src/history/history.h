#ifndef TP_LINKED_LIST_HISTORY_H
#define TP_LINKED_LIST_HISTORY_H

#include <stdlib.h>
#include <stdio.h>

typedef struct double_linked_list {
    int x;
    struct double_linked_list *suiv;
    struct double_linked_list *prec;
} DLL;
#endif //TP_LINKED_LIST_HISTORY_H

DLL *init_dll(int x);

void push(DLL **dll, int x);

void forward(DLL **dll);

void backward(DLL **dll);

void print_dll(DLL *dll);
