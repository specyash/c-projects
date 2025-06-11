#include <stdio.h>

int main(){
    int age = 50;
    if(age>18){
        printf("You can drive\n");
    }
    else if(age>40){
        printf("You are a older and you can drive.\n");
    }
    else if(age>60){
        printf("You are a senior citizen and you acan drive\n");
    }


    return 0;
}