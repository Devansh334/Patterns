/*

Draw following pattern using only 2 loops

* *       * *
*   *   *   *
*     *     *
*           *
*           *
*           *
*           *

*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 1 || j == 7 || (j - i == 1 && i <= 3) || (j + i == 7 && i <= 3))
                printf("* ");
            else
                printf("  ", j);
        }
        printf("\n");
    }
}
