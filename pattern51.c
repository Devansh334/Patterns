/*

Draw following pattern using  loops

        *
      * *
    * * *
  * * * *
* * * * *
* * * * *
* * * *
* * *
* *
*


*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 10; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 5 || (i + j >= 6 && i < 5) || (i + j <= 11 && i > 5))
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