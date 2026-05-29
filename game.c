#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("What is your name for game?");
    printf("Hello %s\n", name);
int age;
    do
    {
     age = get_int("What is your current age?");
    }
    while (age<1);

    if ( age < 13 )
    {
    printf("you are not eligible for this game\n");
    }
    else
    {
        printf("you are eligible for this game\n");
        char c = get_char("Do you want to buy a VIP membership?(y/n)\n");
        if (c=='y')
        {
            printf("VIP unlocked\n");
        }
     else if (c=='n')
     {
            printf("Regular entry\n");
    }
    int time;
    do
    {
     time = get_int("How many hour do you want to play?\n");
    }
     while (time<0);

     for (int i = 1; i <= time; i++)
     {
     printf("Playing hour %i\n", i);
     }


    }
    }

