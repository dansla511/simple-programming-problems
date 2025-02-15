// Write a program that prints a multiplication table for numbers up to 12.

#include <stdio.h>

int main()
{

    for (int i = 1; i <= 12; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            int result = i * j;
            printf("%d ", result);
        }

        printf("\n");
    }

    return 0;
}
