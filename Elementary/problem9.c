// Write a guessing game where the user has to guess a secret number. After every guess the program tells the user whether their number was too large or too small.
// At the end the number of tries needed should be printed. It counts only as one try if they input the same number multiple times consecutively.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    srand(time(NULL));

    long random_number = rand() % 100 + 1;

    printf("%d\n", random_number);

    char inp_str[4];
    long inp;

    printf("I'm thinking of a number between 1 and 100, can you guess what it is?\n");
    printf("Your guess: ");

    fgets(inp_str, 4, stdin);

    inp = strtol(inp_str, NULL, 10);

    while (inp != random_number)
    {

        if (inp > random_number)
        {
            printf("The number is lower than your guess!\n");
        }
        else
        {
            printf("The number is higher than your guess!\n");
        }

        printf("Try again: ");

        fgets(inp_str, 4, stdin);

        inp = strtol(inp_str, NULL, 10);
    }

    printf("Correct!");

    return 0;
}
