/*

Draw following pattern using only 2 loops

* * * * * *
* *
*   *
*     *
*       *
*         *


*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= 6; j++)
        {
            if (i == 1 || j == 1 || i == j)
                printf("* ");
            else
                printf("  ", j);
        }
        printf("\n");
    }
}
