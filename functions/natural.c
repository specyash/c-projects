#include <stdio.h>

int nsum(int n);

/*int nsum(int n){
    return (n*(n+1))/2 ;
}*/ 

int nsum(int n){
    if(n==1){
        return 1;
    }
    return nsum(n-1) + n ;
}

int main(){
    int a = 59;

    printf("The sum of first %d natural no.s is %d\n", a , nsum(a));
    
    return 0;
}