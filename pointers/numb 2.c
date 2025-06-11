#include <stdio.h>

int main(){
    // int i = 72;
    // int*j = &i; // j is a pointer pointing to i 
    // printf("The address of i is %p\n", &i);
    // printf("The address of i is %p\n", j);

    char i = 'a';
    char* j = &i;

    printf("The value of i is %d\n", i);
    printf("The value of address of i is %p\n", j);
    printf("The value of address of i is %p\n", &i);
    


    

    return 0;
}