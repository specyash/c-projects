#include <stdio.h>

int fibonacci(int n);

int fibonacci(int n){
    if(n==1|| n==2){
        return n-1 ;

    }
    return fibonacci(n-1) + fibonacci(n-2); // LOL recursion again 
}

int main(){

    int a =9;

    printf("The value of fibonacci series at %d is %d \n", a , fibonacci(a));
    
    return 0;
}