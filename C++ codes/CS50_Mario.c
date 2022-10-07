// Program to create two adjacent Pyramids
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    // Loop to make code work only in prescribed input i.e 8-10
    do
    {
        height = get_int("Enter Height of Pyramid from 1 to 8: ");
    }
    while (height < 1 || height > 8);

    // Vertical loop
    for (int i = 1; i <= height; i++)
    {

        // Loop for initial spaces
        for (int j = height; j > i; j--)
        {
            printf(" ");
        }

        // Loop for creation of first pyramid
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

        // Two Spaces in between pyramids
        printf("  ");

        // Loop for creation of second pyramid
        for (int k = 0; k < i; k++)
        {
            printf("#");
        }

        // for changing lines
        printf("\n");
    }
}