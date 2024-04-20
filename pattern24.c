/*
Draw following pattern using only 2 loops

0
1 2
3 4 0
1 2 3 4

*/

#include <stdio.h>

void main()
{
    int i, j;
    int temp = 0;

    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)

        {
            printf("%d ", temp++);
            if (temp == 5)
            {
                temp = 0;
            }
        }
        printf("\n");
    }
}
