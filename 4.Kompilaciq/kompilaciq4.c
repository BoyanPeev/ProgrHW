#include <stdio.h>
#include <math.h>

void stepenuvane(long *arr, int size) {
    for (int i = 0; i < size; i++)
        arr[i] = (long)pow(arr[i], 4);
}
void main(){
    long a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    printf("Masivut predi stepenuvane = ");
    for(int i = 0; i < size; i++)
        printf("%ld ", a[i]);
    printf("\n");
    stepenuvane(a, size);
    printf("Masivut sled stepenuvane = ");
    for(int i = 0; i < size; i++)
        printf("%ld ", a[i]);
}