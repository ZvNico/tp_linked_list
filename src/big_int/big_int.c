#include "big_int.h"

BIN *init_bin() {
    BIN *bin = (BIN *) malloc(sizeof(BIN));
    for (int i = 0; i < 5; ++i) {
        bin->chiffres[i] = 0;
    }
    bin->next = NULL;
    return bin;
}

void push_int(BIN *bin, int x) {
    int i = 0, temp;
    while ((x != 0) && (i < 5)) {
        bin->chiffres[i] += x;
        temp = (bin->chiffres[i] / 10);
        x = temp;
        bin->chiffres[i] -= temp * 10;
        i++;
    }
    if (i == 5) {
        if (bin->next == NULL) {
            bin->next = init_bin();
        }
        push_int(bin->next, x);
    }
}

BIN *addition_bin(BIN *bin1, BIN *bin2) {
    BIN *bin = (BIN *) malloc(sizeof(BIN));
    for (int i = 0; i < 5; ++i) {
        if (bin1) {
            bin->chiffres[i] += bin1->chiffres[i];
        }
        if (bin2) {
            bin->chiffres[i] += bin2->chiffres[i];
        }
    }
    if (bin1->next || bin2->next) {
        bin->next = addition_bin(bin1->next, bin2->next);
    }
    return bin;
}

void print_bin(BIN *bin) {
    unsigned short int non_zero = 0;
    if (bin != NULL) {
        print_bin(bin->next);
        for (int i = 4; i >= 0; --i) {
            if (!non_zero && bin->chiffres[i] > 0) {
                non_zero = 1;
            }
            if (non_zero) {
                printf("%d", bin->chiffres[i]);
            }
        }
    }
}

