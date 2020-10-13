#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	for (int i = 0; i <5; i++)
	{
		for (int j = 0; j<15; j++)
		{
			 if((i == 0 && j == 8) ||(i==1 && j<10 && j>6 )||(i == 2 && j < 11 && j>5) || (i == 3 && j < 12 && j>4) || (i == 4 && j < 13 && j>3))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n        *\n       ***\n      *****\n     *******\n    *********\n");
	system("pause");
	return 0;
}