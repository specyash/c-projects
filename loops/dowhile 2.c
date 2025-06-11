#include <stdio.h>

int main(){
    int i = 1;
    int input;
    printf("Please enter your no.\n");
    scanf("%d", &input);
    while (i<=input){
        printf("%d\n", i);
        i++;
    }
    return 0;
}