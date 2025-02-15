// 4. Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
// 5. Modify the previous program such that only multiples of three or five are considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char inp_str[11];
    long inp, out = 0;

    printf("Input a number to calculate the sum of:\n");

    fgets(inp_str, 10, stdin);
    inp = strtol(inp_str, NULL, 10);

    if (inp == 0)
    {
        fprintf(stderr, "Not a valid number\n");
        return -1;
    }

    for (int i = 1; i <= inp; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            out += i;
        }
    }

    printf("Sum of numbers 1 to %ld: %ld\n", inp, out);

    return 0;
}
