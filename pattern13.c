/*
Draw following pattern using only two loops

1 2 3 4 5
2 3 4 5
3 4 5
4 5
5
*/

#include <stdio.h>

void main()
{
    int i, j;
    for (i = 5; i >= 1; i--)
    {
        int temp = 6 - i;
        for (j = 1; j <= i; j++)
        {

            printf("%d ", temp++);
        }
        printf("\n");
    }
}
