#include <stdio.h>

void BubbleSort(int arr[], int length){
    for(int i = 0; i < length; i++){
        for(int j = 0; j < (length - i - 1); j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void SelectSort(int arr[], int length){
    for (int i = 0; i < length; i++){
        int minIndex = i;
        for (int j = i + 1; j < length; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

void InsertSort(int arr[], int length){
    for (int i = 1; i < length; i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void ReverseSort(int arr[], int length){
    int start = 0;
    int end = length - 1;
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void Sort(int arr[], int length){
    #ifdef _WIN32
    BubbleSort(arr, length);
    #elif defined (__linux__)
    SelectSort(arr, length);
    #elif defined (__APPLE__)
    InsertSort(arr, length);
    #else 
    ReverseSort(arr, length);
    #endif
}

void main(){
    int size = 7;
    int a[] = {4, 2, 6, 7, 1, 3, 5};
    Sort(a, size);
    for (int i = 0; i < size; i++){
        printf("%d\n", a[i]);
    }
}