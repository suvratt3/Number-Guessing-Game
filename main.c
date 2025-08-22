#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    srand(time(0));
    
    int RandomNumber = (rand()%100) + 1;
    int no_of_guesses = 0;
    int guessed;

    do
    {
    
    printf("Enter your guess of number: ");
    scanf("%d", &guessed);
    if(guessed>RandomNumber){
        printf("Your guessed number is more than the random number.\n");
    }
    else{
        printf("Your guessed number is less than the random number.\n");
    }
    no_of_guesses++;

    } while (guessed != RandomNumber);

    printf("You guessed the number in %d guesses!", no_of_guesses);

    
    return 0;
}