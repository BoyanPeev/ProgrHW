#include <stdio.h>
#include "mystrings.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Trqbva da ima edin argument\n");
        return 1;
    }
    printf("Duljinata na string '%s' = %d\n", argv[1], strlength(argv[1]));
    return 0;
}
