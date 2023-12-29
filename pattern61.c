/*

Draw following pattern using only two loops

      * * * *
    * * * * *
  * *     * *
* *       * *
          * *
          * *
          * *
          * *
  * * * * * * * * * *

*/

#include <stdio.h>
void main()
{
  int i, j;

  for (i = 1; i <= 8; i++)
  {
    for (j = 1; j <= 7; j++)
    {
      if (j == 6 || j == 7 || (i <= 4 && i + j == 5) || (i <= 4 && i + j == 6) || (i == 2 && j == 5))
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

  printf("  * * * * * * * * * *");
}