#include <stdio.h>

int main(){
    float c,f ;
    printf("What is the temperature in centigrade?\n");
    scanf("%f", &c);
    f = (9.0/5.0)*c + 32;
    printf("The temperature in farenheit is %f", f);
    return 0;
}