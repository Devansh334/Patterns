/*

Draw following pattern using only 2 loops

************
 ************
************
 ************
************
 ************
************
 ************

*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= 12; j++)
        {
            if (i % 2 == 0)
            {
                if (j == 1)
                {
                    printf(" *");
                }
                else
                {
                    printf("*");
                }
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
