/*

Draw following pattern using loops

     *
    * *
   * * *
  * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
    * *
   * * *

*/

#include <stdio.h>
void main()
{

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    for (int i = 4; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }

    for (int i = 1; i <= 2; i++)
    {
        for (int j = 4; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 0; k <= i; k++)
        {
            printf("* ");
        }

        printf("\n");
    }
}