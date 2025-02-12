#include <stdio.h>
#define MAX(a,b) ((a) > (b) ? (a) : (b))

void main(){
    int a = 7;
    int b = 17;
    printf("Nai golemiq ot %d i %d e %d", a, b, MAX(a,b));
}