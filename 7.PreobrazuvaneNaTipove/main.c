#include <stdio.h>
#include "quadraticroots.h"

int main() {
    int a1 = 2;
    int b1 = -3;
    int c1 = 4;
    struct QuadraticRootsResult result1 = findroots(a1, b1, c1);
    if (result1.norealroots) {
        printf("Uravnenieto s int nqma realni koreni\n");
    }else{
        printf("Za int:\n x1 = %Lf\n x2 = %Lf\n", result1.x1, result1.x2);
    }

    float a2= 1.0f;
    float b2 = 4.0f;
    float c2 = -3.0f;
    struct QuadraticRootsResult result2 = findroots(a2, b2, c2);
    if (result2.norealroots) {
        printf("\nUravnenieto s float nqma realni koreni\n");
    }else{
        printf("Za float:\n x1 = %Lf\n x2 = %Lf\n", result2.x1, result2.x2);
    }

    double a3 = 3.0;
    double b3 = 1.0;
    double c3 = 2.0;
    struct QuadraticRootsResult result3 = findroots(a3, b3, c3);
    if (result3.norealroots) {
        printf("\nUravnenieto s double nqma realni koreni\n");
    }else{
        printf("Za double:\n x1 = %Lf\n x2 = %Lf\n", result3.x1, result3.x2);
    }

    return 0;

}