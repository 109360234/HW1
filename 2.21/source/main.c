#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	for (int i = 1; i <18; i++)
	{
		for (int j = 0; j < 25; j++)
		{
				if (i == 1 && j < 9)
				{
					printf("*");
				}
				else if (i ==1 && j==10)
				{
					printf("         ***         *          *\n");
				}
				else if (i == 3 && j == 8)
				{
					printf("*       *       *     *      ***        * *\n");
				}
				else if (i == 5 && j == 8)
				{
					printf("*       *     *         *   *****      *   *\n");
				}
				else if (i == 7 && j == 8)
				{
					printf("*       *     *         *     *       *     *\n");
				}
				else if (i == 9 && j == 8)
				{
					printf("*       *     *         *     *      *       *\n");
				}
				else if (i == 11 && j == 8)
				{
					printf("*       *     *         *     *       *     *\n");
				}
				else if (i == 13 && j == 8)
				{
					printf("*       *     *         *     *        *   *\n");
				}
				else if (i == 15 && j == 8)
				{
					printf("*       *       *     *       *         * *\n");
				}
				if (i == 17 && j < 9)
				{
					printf("*");
				}
				else if (i == 17 && j == 10)
				{
					printf("         ***         *          *\n");
				}
		}
	}
	system("pause");
	return 0;
}
