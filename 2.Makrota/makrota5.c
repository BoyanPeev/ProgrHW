#include <stdio.h>
#define SWAP(a, b, TYPE) {\
TYPE temp;\
temp = a;\
a = b;\
b = temp;\
}

int main()
{
    int a = 1;
    int b = 7;
    SWAP(a, b, int);
    printf("a = %d i b = %d", a, b);
    return 0;
}