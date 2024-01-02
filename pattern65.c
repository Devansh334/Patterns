/*

Draw following pattern

    * *       * *
  * * * *   * * * *
* * * * * * * * * * *
* * * * * * * * * * *
  * * * * * * * * *
    * * * * * * *
      * * * * *
        * * *
          *

*/

#include <stdio.h>

int main()

{
    int n = 11;
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 11; j++)
        {
            if ((i == 1 && (j == 3 || j == 4 || j == 8 || j == 9)) || (i == 2 && (j == 2 || j == 3 || j == 4 || j == 5 || j == 7 || j == 8 || j == 9 || j == 10)) || i == 3)
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
    for (int i = 1; i <= 6; i++)
    {
        for (int k = 1; k < i; k++)
        {
            printf("  ");
        }
        for (int j = n; j >= 1; j--)
        {
            printf("* ");
        }
        printf("\n");
        n -= 2;
    }
    return 0;
}