#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    while(i<=10){
        sum+=i ;// sum+=i means sum = sum + i (meaning that sum will be added to i and result will be stored back in sum)
        i++;
    }
    printf("The sum of first 10 natural no.s is %d\n", sum);
    return 0;
}