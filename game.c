#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Taking player's name
    string name = get_string("What is your name for game? ");
    printf("Hello %s\n", name);

    // Asking age until a valid age is entered
    int age;
    do
    {
        age = get_int("What is your current age? ");
    }
    while (age < 1);

    // Checking the player's eligibility
    if (age < 13)
    {
        printf("You are not eligible for this game.\n");
    }
    else
    {
        printf("You are eligible for this game.\n");

        // Asking for VIP membership choice
        char c;
        do
        {
            c = get_char("Do you want to buy a VIP membership? (y/n): ");
        }
        while (c != 'y' && c != 'n');
        if (c == 'y')
        {
            printf("VIP unlocked.\n");
        }
        else if (c == 'n')
        {
            printf("Welcome to Regular entry\n");
        }

        // Taking play time in hours
        int time;
        do
        {
            time = get_int("How many hours do you want to play?\n");
        }
        while (time <= 0);

        // Displaying each hours of gameplay
        for (int i = 1; i <= time; i++)
        {
            printf("Playing hour %i\n", i);
        }
    }
}
