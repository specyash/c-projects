#include <stdio.h>

int factorial(int a);
// Recursive Function example 

int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    return factorial(n-1)*n;

}

int main(){
    int a = 8;

    printf("%d! is %d\n", a ,factorial(a));
    
    return 0;
}