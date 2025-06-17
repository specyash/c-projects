#include <stdio.h>

int main(){
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int*ptr= a; 
    printf("The value at address %u is %d\n", ptr+3, *(ptr+3)); 
    /* The pointer intially points at the first index that is 0, now ptr+3 leads to pointer pointing at a memory location
     3 units or 12 bytes

    */
    return 0;
}