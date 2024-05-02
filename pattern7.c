/*

Draw following pattern using Only 2 Loops


1 * 3 * 5
* 2 * 4 *
1 * 3 * 5
* 2 * 4 *
1 * 3 * 5

*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    printf("%d ", j);
                }
                else
                {
                    printf("* ");
                }
            }
            else
            {
                if (j % 2 == 0)
                {
                    printf("* ");
                }
                else
                {
                    printf("%d ", j);
                }
            }
        }
        printf("\n");
    }
}
