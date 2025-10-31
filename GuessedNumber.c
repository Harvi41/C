#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;

    int no_of_guesses = 0;

    int guessed;

    printf("\t----GUESS THE NUMBER----\n\n");

    do
    {
        printf("Enter The Number:");
        scanf("%d", &guessed);

        if (guessed > randomNumber)
        {
            printf("Lower number please!\n");
        }
        else if(guessed < randomNumber){
        
            printf("Higher number please!\n");
        }
        else
        {
            printf("Congratulation!!!");
        }
        no_of_guesses++;
    }
     while (guessed != randomNumber);

    printf("\nCongratulations!!!\n");

    printf("You guessed the number in %d guesses.\n", no_of_guesses);

    return 0;
}
