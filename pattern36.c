/*
Draw following using 2 loops

A A A A A
A B B B A
A B C B A
A B B B A
A A A A A

*/
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {

            if (i == 1 || j == 1 || i == 5 || j == 5)
            {
                printf("A ");
            }
            else if (i == 2 || j == 4 || i == 4 || j == 2)
            {
                printf("B ");
            }
            else
            {
                printf("C ");
            }
        }
        printf("\n");
    }
}