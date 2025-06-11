#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with current time
    srand(time(0)); 
    
    // Generate a random number between 0 and 99
    int randomNumber = rand() % 100; 
    int no_of_guesses = 0;
    int guessed_number;
    
    // printf("Random number: %d\n", randomNumber);
    do{
        printf("Guess the random no.\n");
        scanf("%d", &guessed_number);
        if(guessed_number>randomNumber){
            printf("Lower no. please!\n");
        }
        else if (guessed_number<randomNumber){
            printf("Higher no. please!\n");
        }
        else{
            printf("Congratulations! You guessed the no. correctly\n");
        }
        no_of_guesses++;

    }while(guessed_number!=randomNumber);

    printf("You guessed the no. in %d guesses.\n", no_of_guesses);

    return 0;
}
