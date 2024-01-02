/*

Make the following pattern using two loops

0 1 1 1 1 1 0 
1 0 0 0 0 0 1
1 0 0 0 0 0 1
1 0 0 0 0 0 1
1 0 0 0 0 0 1
1 0 0 0 0 0 1
0 1 1 1 1 1 0

*/

#include <stdio.h>
void main()
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= 7; j++)
        {
            if (i == 1 && i != j && i + j != 8 || i == 7 && i != j && i + j != 8 || j == 1 && i != j && i + j != 8 || j == 7 && i != j && i + j != 8)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
}
