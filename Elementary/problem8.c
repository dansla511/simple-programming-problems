// Write a program that prints all prime numbers.
// (Note: if your programming language does not support arbitrary size numbers, printing all primes up to the largest number you can easily represent is fine too.)

#include <stdio.h>
#include <math.h>
#include <limits.h>

int is_prime(int num);

int main()
{

    for (int i = 1; i < 10000; i++)
    {
        if (is_prime(i) == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

int is_prime(int num)
{

    if (num == 1)
    {
        return 0;
    }

    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
