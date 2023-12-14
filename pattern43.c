/*

Draw following pattern using Only 2 Loops

1 2 3 2 1
2 2 3 2 2
3 3 3 3 3
2 2 3 2 2
1 2 3 2 1

*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
        {
            if (i == 3 || j == 3)
            {
                printf("3 ");
            }
            else if ((i == 1 && j == 1) || (i == 1 && j == 5) || (i == 5 && j == 1) || (i == 5 && j == 5))
            {
                printf("1 ");
            }
            else
            {
                printf("2 ");
            }
        }
        printf("\n");
    }
}