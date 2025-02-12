#include <stdio.h>
#define SQUARE(A, B) (((A) + (B)) * ((A) + (B)))

void main() {
    int a = 5;
    int b = 7;
    int result = SQUARE(a, b);
    printf("Rezultatut ot (%d + %d)^2 e = %d\n", a, b, result);
}