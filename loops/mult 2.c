#include <stdio.h>

int main(){
    int sum = 0;
    int z;
    for (int i = 1; i <=10; i++)
    {
       z = 8*i;
       sum+=z; 
    }
    printf("The value of sum of all no.s occuring in the table of 8 is %d\n", sum);
    
    return 0;
}