// Write a program that prints the next 20 leap years.

#include <stdio.h>
#include <time.h>

int main()
{

    time_t unix_time;
    struct tm *human_time;

    time(&unix_time);
    human_time = localtime(&unix_time);

    int current_year = human_time->tm_year + 1900;
    int years_printed = 0;

    while (years_printed != 20)
    {
        // currently no idea how to merge these ifs without the merged if looking terrible
        if (current_year % 4 == 0 && current_year % 100 != 0)
        {
            printf("%d ", current_year);
            years_printed++;
        }
        else if (current_year % 400 == 0)
        {
            printf("%d ", current_year);
            years_printed++;
        }

        current_year++;
    }

    return 0;
}
