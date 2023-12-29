/*
Draw the following pattern with 2 loops
 j 1 2 3 4 5 6 7
i
1        *
2      * * *
3    * * * * *
4  * * * * * * *
5    * * * * *
6      * * *
7        *
*/

#include <stdio.h>

void main()
{
	int i, j;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <= 7; j++)
		{
			if ((i <= 4 && i + j >= 5 && j - i <= 3) || (i > 4 && i - j <= 3 && i + j <= 11))
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
