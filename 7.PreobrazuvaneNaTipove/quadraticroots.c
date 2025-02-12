#include "quadraticroots.h"
#include <math.h>

struct QuadraticRootsResult findroots(long double a, long double b, long double c){
    struct QuadraticRootsResult result;

    long double d = b * b - 4 * a * c;

    if (d < 0){
        result.norealroots = 1;
    }else{
        result.x1 = (-b - sqrtl(d)) / (2 * a);
        result.x2 = (-b + sqrtl(d)) / (2 * a);
    }

    return result;

}
