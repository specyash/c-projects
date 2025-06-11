#include <stdio.h>

int main(){
    int n = 19;
    int composite = 0;
    if(n==0 || n==1){
        composite = 1;
    }
    else{
        int i = 2;
        while(i<n){
            if(n%i==0){
                composite = 1;
                break;
            }
            i++ ;
        }
    }
    if(composite){
        printf("&d is a composite no.\n", &n);
    }
    else{
        printf("&d is a prime no.\n", &n);
    }

    return 0;
}