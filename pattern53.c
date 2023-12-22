/*

Draw following pattern using only 2 loops

*         *         *
  *       *       *
    *     *     *
      *   *   *
        * * *
* * * * * * * * * * *
        * * *
      *   *   *
    *     *     *
  *       *       *
*         *         *

*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 11; i++)
    {
        for (j = 1; j <= 11; j++)
        {
            if (i == 6 || j == 6 || i == j || i + j == 12)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}