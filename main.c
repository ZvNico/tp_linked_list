#include <stdio.h>
#include "src/big_int/big_int.h"

int main() {
    BIN *bin;
    BIN *bin1 = init_bin();
    BIN *bin2 = init_bin();
    push_int(bin1, 320012);
    push_int(bin2, 12023000);
    print_bin(bin1);
    printf("\n");
    print_bin(bin2);
    printf("\n");
    bin = addition_bin(bin1, bin2);
    print_bin(bin);
    printf("\n");
    return 0;
}
