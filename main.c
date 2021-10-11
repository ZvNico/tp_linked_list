#include <stdio.h>
#include "src/history/history.h"

int main() {
    DLL *dll = init_dll(5);
    push(&dll, 10);
    push(&dll, 12);
    forward(&dll);
    print_dll(dll);
    backward(&dll);
    print_dll(dll);
    return 0;
}
