#include <stdio.h>


//function declarations for pre-processing
void asterisk1(int lines);
void numbers(int lines);
void atasterisk(int lines);
void asterisk2(int lines);
void asterisk3(int lines);
void asterisk4(int lines);

int main()
{
    int lines;
    printf("enter number of lines: ");
    scanf(" %d", &lines);

    /*
    The patterns are all computed inside their respective functions,
    if u wanna check how the function works,they are after the main function,
    functions don't change how the code works, the logic remains the same irrespective of it.
    Only used functions for neatness and stuffing all 6 patterns into one code :)
    ask me if u have any questions,
    
    -Isuru
    */

    asterisk1(lines);
    printf("\n----------\n");

    numbers(lines);
    printf("\n----------\n");

    atasterisk(lines);
    printf("\n----------\n");

    asterisk2(lines);
    printf("\n----------\n");

    asterisk3(lines);
    printf("\n----------\n");
    
    asterisk4(lines);
    printf("\n----------\n");

    return 0;
}

void asterisk1(int lines)
{
    for (int i = 0; i <= lines; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n\n");
    }
}

void numbers(int lines)
{
    for (int i = 0; i <= lines; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c", j + 48); // converting to ascii
        }
        printf("\n\n");
    }
}

void atasterisk(int lines)
{
    for (int i = 0; i <= lines; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (i % 2 == 0)
            {
                printf("*");
            }
            else
            {
                printf("@");
            }
        }
        printf("\n\n");
    }
}

void asterisk2(int lines)
// prints in descending order
{
    for (int i = lines; i > 0; i--)
    {
        for (int j = lines + 2; j > (lines - i); j--)
        {
            printf("*");
        }
        printf("\n\n");
    }
}

/*
r=lines
c=2*i - 1

testing::

!*!
***
(r2xc3)

!!*!!
!***!
*****
(r3xc5)

!!!*!!!
!!***!!
!*****!
*******
(r4xc7)

!!!!*!!!!
!!!***!!!
!!*****!!
!*******!
*********
(r5xc9)
*/
void asterisk3(int lines)
{
    // lines
    for (int i = 1; i <= lines; i++)
    {
        // preceeding spaces
        for (int k = (lines - i); k > 0; k--)
        {
            printf(" ");
        }

        // asterisks
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf("*");
        }
        // trailing spaces
        for (int k = (lines - i); k > 0; k--)
        {
            printf(" ");
        }
        printf("\n\n");
    }
}

/*

***** *****
****   ****
***     ***

*/
void asterisk4(int lines)
{
    for (int i = 1; i <= lines; i++)
    {
        // asterisks
        for (int k = (lines - i) + 3; k > 0; k--)
        {
            printf("*");
        }

        // spaces
        for (int j = 0; j < 2 * i - 1; j++)
        {
            printf(" ");
        }
        // asterisks
        for (int k = (lines - i) + 3; k > 0; k--)
        {
            printf("*");
        }
        printf("\n\n");
    }
}