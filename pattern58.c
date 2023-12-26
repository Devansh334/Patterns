/*

Draw following pattern using only two loops

      *
    * * *
  * * * * *
    * * *
  * * * * *
* * * * * * *
      *
      *
   *******

*/

#include <stdio.h>
void main()
{
    int i, j;

    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (j == 4 || (i <= 3 && i + j >= 5 && j - i <= 3) || (i <= 6 && i + j >= 7 && j - i <= 1))
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

    printf("   *******");
}