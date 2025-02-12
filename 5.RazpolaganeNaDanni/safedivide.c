#include <stdio.h>
#include <limits.h>
#include "safeint.h"

int main(int argc, char *argv[]){

    struct SafeResult safedivide(int a, int b);

    if (argc != 3){
        printf("Trqbva da se vuvedat dva argumenta");
        return 1;
    }

    struct SafeResult n1 = safestrtoint(argv[1]);
    struct SafeResult n2 = safestrtoint(argv[2]);

    if(n1.errorflag || n2.errorflag){
        printf("Argumentite ne vlizat vuv vuzmojnite stoinosti na int");
        return 1;
    }

    struct SafeResult result = safedivide(n1.value, n2.value);
    if (result.errorflag){
        printf("Sumata ot dvata argumenta ne vliza vuv vuzmojnite stoinosti na int");
    }else{
        printf("%d", result.value);
    }

    return 0;
}