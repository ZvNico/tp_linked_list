#include "big_int.h"

BIN *init_bin() {
    BIN *bin = (BIN *) malloc(sizeof(BIN));
    for (int i = 0; i < 5; ++i) {
        bin->chiffres[i] = 0;
    }
    bin->next = NULL;
    return bin;
}

void push_int(BIN *bin, int x, int i) {

}

void print_bin(BIN *bin) {
    if (bin != NULL) {
        for (int i = 4; i >= 0; --i) {
            print_bin(bin->next);
            printf("%d", bin->chiffres[i]);
        }
    }
}