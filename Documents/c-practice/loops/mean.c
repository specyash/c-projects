#include <stdio.h>

int main(){
    int input ;
    int i = 1;
    printf("Please enter the value:\n");
    scanf("%d", &input);
    do
    { printf("%d\n", i);
        i++;
   
    } while (i<=input);
    
    return 0;
}