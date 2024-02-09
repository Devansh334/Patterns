/*
Draw following pattern
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
5 4 3 2 1
*/

#include <stdio.h>

void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 5; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}
