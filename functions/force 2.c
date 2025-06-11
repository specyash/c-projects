#include <stdio.h>

float force(float x);

float force(float x){
    return x*9.8 ;
}

int main(){

    float  m = 13.5;

    printf("The force of gravity on the body of mass %f kg(s)is %f netwon\n", m , force(m));
    
    return 0;
}