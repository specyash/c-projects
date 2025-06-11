#include <stdio.h>

int main(){
    int a ;
    printf("Enter the desired no.\n");
    scanf("%d", &a);
    if (a%2==0){
        printf("The no. is even.\n");
    }
    else{
        printf("The no. is odd");
    }
    return 0;
}