#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	for (int i = 0; i <17; i++)
	{
		for( int j=0;j<9; j++)
		{
			if (i==0 && j<9)
			{
				printf("P");
			}	
			else if (((i!=0 && i<4) && (j == 4 || j == 8))||(i==4) &&(j==5||j==7))
			{
				printf("P");
			}
			else if( (i != 0 && i < 5))
			{
				printf(" ");
			}
			if ( i==6&& (j == 2 || j == 3))
			{
				printf("J");
			}
			else if ( (i==8&&j==0)||((i==7 || i==9) &&j==1)|| (i == 10 && j > 1 && j < 9))
			{
				printf("J");
			}
			else if (i != 0 && i < 11 && i>5 )
			{
				printf(" ");
			}
			if ( (i == 12 && j < 9) || (i==13 || i==14)&&(j==0||j==8)||(i==15&&(j==1 || j==7))||(i==16 &&j<7&&j>1 ))
			{
				printf("D");
			}
			else if (i != 0 && i >12)
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}