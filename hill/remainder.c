#include <stdio.h>

int main(){
    int a,b,c;
    printf("what is the first no.?\n");
    scanf("%d", &a);
    printf("what is the second no.?\n");
    scanf("%d", &b);
    c = a%b;
    printf("the remainder when a is divided by b is %d", c);
    return 0;
}