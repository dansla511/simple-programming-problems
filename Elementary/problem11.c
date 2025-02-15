// Write a program that computes the sum of an alternating series where each element of the series is an expression of the form ((−1)^k+1)/(2*k−1)
// for each value of k from 1 to a million, multiplied by 4.

#include <stdio.h>
#include <math.h>

int main()
{

    double result = 0;

    for (int i = 1; i <= 1000000; i++)
    {
        double i_double = (double)i;
        result += (pow(-1, i_double + 1) / (2 * i_double - 1));
    }

    printf("%f \n", 4 * result);

    return 0;
}
