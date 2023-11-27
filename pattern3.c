/*

Draw following pattern using Only 2 Loops
1 * * * *
1 2 * * *
1 2 3 * *
1 2 3 4 *
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
            if (j <= i)
            {
                printf("%d ", j);
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
}