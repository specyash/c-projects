#include <stdio.h>
int main(){
    int h;
    printf("what is the height of the cylinder?\n");
    scanf("%d", &h);
    int r;
    printf("what is the radius of the cylinder?\n");
    scanf("%d", &r);
    printf("the volume of the cylinder with radius %d and height %d is %f",r ,h, 3.14*r*r*h);
    return 0;
}