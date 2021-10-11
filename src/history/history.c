#include "history.h"

DLL *init_dll(int x) {
    DLL *dll = (DLL *) malloc(sizeof(DLL));
    dll->prec = NULL;
    dll->suiv = NULL;
    dll->x = x;
    return dll;
}

void push(DLL **dll, int x) {
    DLL *new_dll = init_dll(x);
    new_dll->suiv = *dll;
    (*dll)->prec = new_dll;
    *dll = new_dll;
}

void forward(DLL **dll) {
    if ((*dll)->suiv != NULL) {
        *dll = (*dll)->suiv;
    }
}

void backward(DLL **dll) {
    if ((*dll)->prec != NULL) {
        *dll = (*dll)->prec;
    }
}

void print_dll(DLL *dll) {
    if (dll != NULL) {
        printf("%d ", dll->x);
        print_dll(dll->suiv);
    } else {
        printf("\n");
    }
}