/*

Draw following pattern using Only 2 Loops
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5
5 4 3 2 1
1 2 3 4 5

*/

#include <stdio.h>

void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i % 2 != 0)
            {
                printf("%d ", j);
            }
            else
            {
                printf("%d ", 6 - j);
            }
        }
        printf("\n");
    }
}