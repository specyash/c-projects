#include <stdio.h>

int main(){
    int a, b, c;
    float d ;
    printf("What is the first no.?\n");
    scanf("%d", &a);
    printf("What is the second no.?\n");
    scanf("%d", &b);
    printf("What is the third no.?\n");
    scanf("%d", &c);
    d = (a + b + c)/3.0;
    printf("The average of the 3 no.s is %f", d);
    return 0;
}