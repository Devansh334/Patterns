/*

Draw following pattern using Only 2 Loops
* * * * *
* 2 3 4 *
* 2 3 4 *
* 2 3 4 *
* * * * *

*/

#include <stdio.h>
int i;
void main()
{
	for (i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 5; j++)
		{

			if (i == 1 || i == 5 || j == 1 || j == 5)
			{
				printf("* ");
			}
			else
			{
				printf("%d ", j);
			}
		}

		printf("\n");
	}
}