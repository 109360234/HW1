#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	int n = 3;
	int temp;
	int A[3];
	while (scanf_s)
	{
		printf("�п�J�T�Ӿ��\n");
		scanf_s("%d", &A[0]);
		scanf_s("%d", &A[1]);
		scanf_s("%d", &A[2]);
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (A[j] > A[j + 1])
				{
					temp = A[j];
					A[j] = A[j + 1];
					A[j + 1] = temp;
				}
			}
		}
		printf("�̤j��%d", A[2], "\n");
		printf("�̤p��%d", A[0], "\n");
	}
	system("pause");
	return 0;
}