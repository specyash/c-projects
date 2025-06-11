#include <stdio.h>
// Function Prototype 
int sum(int, int);

// Function Definition
int sum(int x, int y){
    printf("The sum is %d\n", x+y);
    return x+y;
}
int main(){
    int a = 17;
    int b = 19;

   int c = sum(a,b);
    
    return 0;
}