#include <stdio.h>

int main(){
    int a = 1, b = 2 , c = 13 , d = 4;
    if (a>b && a>c && a >d){
        printf("The greatest no. is %d\n", a);
    }   
    else if (b>a && b>c && b>d){
        printf("The greatest no. is %d\n", b);
    }
   else if (c>a && c>b && c>d){
        printf("The greatest no. is %d\n", c);
   }
   else {
    printf("The greatest no. is %d\n", d);
   }
    return 0;
}