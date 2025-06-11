#include <stdio.h>

void swap(int* a, int*b);

void swap(int*a ,int*b){
    int temp = *a;  // swapping code (remember with analogy)
    *a = *b;
    *b = temp;
}

int main(){
    int a =4 , b =6;
    swap(&a,&b);
    printf("the value of a is %d and the value of b is %d\n", a,b);
    
    return 0;
}