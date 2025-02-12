#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Trqbva da ima dva argumenta\n");
        return 1;
    }

    int result = strcompare(argv[1], argv[2]);
    printf("Srawnenieto na dvata stringa = %d\n", result);
    return 0;
}
