#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	for (int i = 0; i <17; i++)
	{
		for( int j=0;j<9; j++)
		{
			if((i==4||i==0)&&j<9)
			{
				printf("M");
			}
			else if ((i == 1 || i == 3) && j == 7)
			{
				printf("M");
			}
			else if (i == 2 && j > 1 && j < 7)
			{
				printf("M");
			}
			else if (i == 6 && j < 9)
			{
				printf("L");
			}
			else if (i > 6 &&i<11&& j==0)
			{
				printf("L");
			}
			else if(i==12&&(j==1||j==6||j==7))
			{		
				printf("S");
			}
			else if ((i > 12 && i < 16 && (j == 0 || j == 8))||(i==13&&j==5) || (i == 14 && j == 4)||(i==15&&j==3))
			{
				printf("S");
			}
			else if (i == 16 && (j == 1 || j == 2 || j == 7))
			{
				printf("S");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}