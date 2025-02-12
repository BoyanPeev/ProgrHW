#include <stdio.h>
#define SWAP(A, B , TYPE){\
TYPE TEMP;\
TEMP = A;\
A = B;\
B = TEMP;\
}
#define SORT(ARRAY, SIZE, TYPE, COMPARE){\
    for(int i = 0; i < SIZE - 1; i++){\
    for(int j = 0; j < SIZE - i - 1; j++){\
    if(ARRAY[j] COMPARE ARRAY[j+1]){\
        SWAP(ARRAY[j], ARRAY[j+1], TYPE);\
    }\
    }\
    }\
}
int main(){
    int array[5] = {7, 213, 4125, 421, 3421};
    printf("Before Sort\n"); 
    for(int i = 0; i < 5; i++){
        printf("%d\n", array[i]);
    }
    printf("After > Sort\n");
    SORT(array, 5, int, >);
    for(int i = 0; i < 5; i++){
        printf("%d\n", array[i]);
    }
    printf("After < Sort\n");
    SORT(array, 5, int, <);
    for(int i =0; i < 5; i++){
        printf("%d\n", array[i]);
    }
}