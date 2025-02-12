#include <stdio.h>
#define DEBUG
void Sort(int arr[], int length){
    int sum = 0;
    for(int i = 0; i < length; i++){
        for(int j = 0; j < (length - i - 1); j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if(i % 3 == 0 && i != 0){
            sum = sum + arr[i];
        }
    }
    #ifdef DEBUG
        printf("sum = %d\n", sum);
    #endif
}
int main() {
    int size = 7;
    int a[] = {4, 2, 5, 6, 1, 3, 7};
    #ifdef DEBUG
    Sort(a, size);
    for(int i = 0; i < size; i++){
        printf("%d\n", a[i]);
    }
    #endif
    }