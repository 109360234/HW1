#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	printf("number    sqare    cube\n");
	for (int i = 0; i < 11; i++)
	{
		if (i > 3 && i != 10)
		{
			printf("%d", i);
			printf("         %d", i * i);
			printf("       %d", i * i * i);
			printf("\n");
		}
		else if (i == 10)
		{
			printf("%d", i);
			printf("        %d", i * i);
			printf("      %d", i * i * i);
			printf("\n");
		}
		else
		{
			printf("%d", i);
			printf("         %d", i * i);
			printf("        %d", i * i * i);
			printf("\n");
		}
	}
	system("pause");
	return 0;
}