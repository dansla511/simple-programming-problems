// Write a program that asks the user for a number n and gives them the possibility to choose between computing the sum and computing the product of 1,…,n.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char inp_str[11];
    long inp, out = 0;
    int sum_mul_bool = 0;

    printf("Input a number to calculate the sum or product of:\n");

    fgets(inp_str, 10, stdin);
    inp = strtol(inp_str, NULL, 10);

    while (inp == 0)
    {
        fprintf(stderr, "Not a valid number\n");
        fgets(inp_str, 10, stdin);
        inp = strtol(inp_str, NULL, 10);
    }

    printf("Input 's' for sum or 'p' for product\n");

    fgets(inp_str, 10, stdin);

    while (strcmp(inp_str, "s\n") != 0 && strcmp(inp_str, "p\n") != 0)
    {
        fprintf(stderr, "Not a valid option\n");
        fgets(inp_str, 10, stdin);
    }

    if (strcmp(inp_str, "s\n") == 0)
    {
        sum_mul_bool = 1;
    }
    else
    {
        out = 1;
    }

    for (int i = 1; i <= inp; i++)
    {
        if (sum_mul_bool == 1)
        {
            out += i;
        }
        else
        {
            out *= i;
        }
    }

    if (sum_mul_bool == 1)
    {
        printf("Sum of numbers 1 to %ld: %ld\n", inp, out);
    }
    else
    {
        printf("Product of numbers 1 to %ld: %ld\n", inp, out);
    }

    return 0;
}
