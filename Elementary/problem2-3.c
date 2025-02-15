// 2. Write a program that asks the user for their name and greets them with their name.
// 3. Modify the previous program such that only the users Alice and Bob are greeted with their names.

#include <stdio.h>
#include <string.h>

int main()
{

    char name[20];

    printf("What is your name?");

    fgets(name, 20, stdin);

    // cba removing trailing newline

    if (strcmp(name, "Alice\n") == 0 || strcmp(name, "Bob\n") == 0)
    {
        printf("Hello %s", name);
    }

    return 0;
}