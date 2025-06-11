#include <stdio.h>

float average(int x, int y, int z);

float average(int x, int y, int z){
    return (x+y+z)/3.0;
}


int main(){
    int x = 3, y = 4, z = 7;

    printf("The average of x, y and z is %f\n", average(x,y,z));
    
    return 0;
}