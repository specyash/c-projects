#include <stdio.h>

int count(int a[], int n ){
   int  no_of_positive = 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0){
            no_of_positive++;
        }
    }
    return no_of_positive;
}

int main(){
    int arr[]={1, -5, 7, 9, -4};
    printf("The no. of positive integers is %d", count(arr, 5));
    return 0;
}