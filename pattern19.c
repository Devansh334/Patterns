/*
Draw following pattern using only 2 loops
6
1 6
1 2 6
1 2 3 6
1 2 3 4 6
1 2 3 4 5 6

*/
#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == j)
            {
                printf("6 ");
            }
            else
            {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}
