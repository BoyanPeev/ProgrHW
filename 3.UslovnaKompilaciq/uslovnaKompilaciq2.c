#include <stdio.h>
#define ARRAY_SIZE 7
int main(){
#ifdef ARRAY_SIZE
    #if(ARRAY_SIZE > 0 && ARRAY_SIZE < 11)
        int arr[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++){
        arr[i] = 1 << i;
        printf("%d\n",arr[i]);
    }
    #else
        printf("makroto ne e mejdu 0 i 11");
    #endif
#endif
#ifndef ARRAY_SIZE
    printf("ne e definirano makro")
#endif
}