#include <stdio.h>
int nod(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int nok(int a, int b) {
    return (a * b) / nod(a, b);
}
void main() {
    int a = 10;
    int b = 15;
    int result = nok(a, b);
    printf("Naj-malkoto osbhto kratno na %d i %d e %d", a, b, result);
}