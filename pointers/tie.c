#include <stdio.h>

void change_to_thirty_times(int *ptr);

void change_to_thirty_times(int*ptr){
    *ptr = *ptr * 30;
}

int main(){
    int x = 15;
    printf("the value of x is %d\n", x);
    change_to_thirty_times(&x);
    printf("the value of x is %d\n", x);
    return 0;
}