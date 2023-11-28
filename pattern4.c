/*

Draw following pattern using Only 2 Loops
2 3 4 5 6
3 4 5 6 7
4 5 6 7 8
5 6 7 8 9
6 7 8 9 10

*/

#include <stdio.h>
void main()
{
    int i, j;
    int count = 0;

    for (i = 2; i <= 6; i++)
    {

        for (j = i; j < i + 5; j++)
        {

            printf("%d ", j);
        }
        printf("\n");
    }
}