#include <stdio.h>

float farenheit(float x);

float farenheit(float x){
    return (9*x)/5 + 32;
}

int main(){

    float celsius = 100;

    printf("The value in farenheit is %f\n", farenheit(celsius));
    
    return 0;
}