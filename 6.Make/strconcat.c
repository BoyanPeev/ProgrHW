#include <stdio.h>
#include <string.h>
#include "mystrings.h"

#define MAX_LENGTH 50

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Trqbva da ima dva argumenta\n");
        return 1;
    }

    if (strlen(argv[1]) > MAX_LENGTH || strlen(argv[2]) > MAX_LENGTH) {
        printf("Stringa ne moje da bude poveche ot 50 simvola\n");
        return 1;
    }

    char str1[MAX_LENGTH * 2];
    strncpy(str1, argv[1], MAX_LENGTH);

    strconcat(str1, argv[2]);
    printf("Obedineniqt string =  %s\n", str1);

    return 0;
}
