#include <stdio.h>

int main(){
    int arr[10];
    for (int i = 0; i <=9; i++)
    {
        arr[i]=5*(i+1);
    }
    for (int i =0; i <=9; i++)
    {
        printf("The value of 5X%d is %d\n", i+1, arr[i]);
    }
    
    
    return 0;
}