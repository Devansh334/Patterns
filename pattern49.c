/*

Draw following pattern using only 2 loops

*  *  *  *  *  *  *  *  *  *  *
*           *  *  *           *
*        *     *     *        *
*     *        *        *     *
*  *           *           *  *
*  *  *  *  *  *  *  *  *  *  *
*  *           *           *  *
*     *        *        *     *
*        *     *     *        *
*           *  *  *           *
*  *  *  *  *  *  *  *  *  *  *

*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 11; i++)
    {
        for (j = 1; j <= 11; j++)
        {
            if (i == 11 || j == 11 || i == 1 || j == 1 || j == 6 || i == 6 || i + j == 7 || j - i == 5 || i - j == 5 || i + j == 17)
                printf("*  ");
            else
                printf("   ");
        }
        printf("\n");
    }
}
