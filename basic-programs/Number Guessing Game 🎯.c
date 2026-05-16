#include <stdio.h>
#include <stdlib.h>
void main()
{
    int guess, num = 7; // fixed number

    printf("Guess the number (1-10): ");

    do
    {
        scanf("%d", &guess);

        if(guess > num)
            printf("Too high! Try again: ");
        else if(guess < num)
            printf("Too low! Try again: ");
        else
            printf("Correct guess!");
    } while(guess != num);
}
