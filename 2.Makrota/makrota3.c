#include <stdio.h>
#define DEBUG(a) printf("File : %s, Line : %d, Name: %s, Value: %d", __FILE__, __LINE__, #a, a)
int main(){
int promenliva = 5;
DEBUG(promenliva);
return 0;
}