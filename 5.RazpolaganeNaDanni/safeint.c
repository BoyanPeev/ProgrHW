#include <stdio.h>
#include <limits.h>
#include "safeint.h"

struct SafeResult safeadd(int a, int b){
    struct SafeResult result;
    int sum = a + b;
    if (sum > INT_MAX || sum < INT_MIN){
        result.value = 0;
        result.errorflag = 1;
    }else{
        result.value = sum;
        result.errorflag = 0;
    }
     
    return result;
}

struct SafeResult safesubtract(int a, int b){
    struct SafeResult result;
    int sum = a - b;
    if (sum > INT_MAX || sum < INT_MIN){
        result.value = 0;
        result.errorflag = 1;
    }else{
        result.value = sum;
        result.errorflag = 0;
    }
     
    return result;
}

struct SafeResult safemultiply(int a, int b){
    struct SafeResult result;
    int sum = a * b;
    if (sum > INT_MAX || sum < INT_MIN){
        result.value = 0;
        result.errorflag = 1;
    }else{
        result.value = sum;
        result.errorflag = 0;
    }
     
    return result;
}

struct SafeResult safedivide(int a, int b){
    struct SafeResult result;
    if (b == 0){
        result.value = 0;
        result.errorflag = 1;
    }else{
        result.value = a / b;
        result.errorflag = 0;
    }
     
    return result;
}

struct SafeResult safestrtoint(char *str){
    struct SafeResult result;
    result.value = 0;
    result.errorflag = 0;

    int i = 0;

    while (str[i] != '/0'){

        int n = str[i] - '0';

        struct SafeResult multiplyresult = safemultiply(result.value, 10);
        if (multiplyresult.errorflag){
            result.errorflag = 1;
            return result;
        }

        struct SafeResult addresult = safeadd(multiplyresult.value, n);
        if (addresult.errorflag){
            result.errorflag = 1;
            return result;
        }

        result.value = addresult.value;
        i++;
    }

    return result;

}