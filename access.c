#include <cs50.h>
#include <stdio.h>

void grant_access(void);

int main(void)
{
    string name = get_string("What is your name?");
    printf("Hello %s\n", name);

    char c;
    do {
         c = get_char("What is your Tech Tier? (A/B)");
       }
       while(c != 'A' && c != 'B');

        if (c == 'A')
    {
        printf("Welcome to our Advanced Programm\n");
    }
    else if (c == 'B')
    {
        printf("Welcome to our Beginner Programm\n");
    }

    int i;
    do
    {
        i = get_int("Print the Access Code\n");
    }
    while ( i < 0 || i > 5);
    // j isliye dala taki # print kare aur function wale me extra i na add kare kyuki waha jaakar wo i+1 ho rha tha 

    for (int j = 1; j < 5; j++)
    {
        printf("#");
    }
    printf("\n");

    void grant_access(void);

    if ( c=='A' && i % 2 == 0 )
    {
        printf("Access Granted, Master %s\n", name);
    }
    else if ( c=='B' && i % 2 != 0 )
    {
        printf("Access Granted, Master %s\n", name);
    }
    else
    {
        printf("Access Denied. You are not ready\n");
    }
}


