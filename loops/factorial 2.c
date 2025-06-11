#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for (int i = (n-1); i; i--)
    {
     n = n*i;
    }
    printf(" factorial is %d\n", n );
    
    return 0;
}