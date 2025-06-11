#include <stdio.h>

int main(){
    int x , y, z;
    int numbers[3]={x,y,z};
    for (int i = 0; i < 3; i++)
    {
       printf("Enter the value of %d no.\n", i);
       scanf("%d", &x);
    }
    
    return 0;
}