/*

Make the following pattern using two loops

      * * * * * * * *
    *   *             *
  *       *             *
* * * * * * * * * * * * * *
*           *             *
*           *             *
*           *             *
*           *             *
* * * * * * * * * * * * * *

*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 9; i++)
    {
        for (j = 1; j <= 14; j++)
        {
            if (i == 4 || i == 9 || (i == 1 && j >= 4 && j <= 11) || (i <= 4 && i + j == 5) || (i <= 4 && j - i == 3) || (i <= 4 && j - i == 10) || (j == 1 && i >= 4) || (j == 7 && i >= 4) || (j == 14 && i >= 4))
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