#include <stdio.h>
#include "maths.c"

void main() {
    int n;
    printf("number = ");
    scanf("%d", &n);
    int result = factoriel(n);
    if (result == -1) {
        printf("ne e definirano za otricatelni chisla");
    }else{
        printf("Faktorielut na %d e %d", n, result);
    }
}