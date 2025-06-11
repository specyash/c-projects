#include <stdio.h>

int main(){
    int P;
    int C;
    int M;
    printf("What percentage did you score in Physics?\n");
    scanf("%d", &P);
    printf("What percentage did you score in Chemistry?\n");
    scanf("%d", &C);
    printf("What percentage did you score in Mathematics?\n");
    scanf("%d", &M);
    printf("Your marks in Physics, Chemistry and Mathematics are %d, %d and %d\n", P,C,M);
    if (P<33 || C<33 || M<33 ){
        printf("You failed due to less marks in indivisual subject(s)\n");
    
    }
    else if ((P+C+M)/3 < 40){
        printf("You failed due to less cumulative percentage\n");
    }
    else{
        printf("You Passed!\n");
    }
    

    return 0;
}