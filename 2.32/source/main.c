#include <stdio.h>
#include<stdlib.h>
int main(void)
{
	float cm, kg,bmi;
	while (scanf_s)
	{
		printf("請輸入身高cm體重kg:\n");
		scanf_s("%f%f", &cm, &kg);
		bmi = kg / ((cm / 100.0) * (cm / 100.0));
		printf("BMI VALUES\n");
		printf("BMI=%f", bmi);
		printf("\n");
		if (bmi < 18.5)
		{
			printf("Underweight:  less than 18.5\n");
		}
		else if (bmi >= 18.5 && bmi <= 24.9)
		{
			printf("Normal:       between 18.5 and 24.9\n");
		}
		else if (bmi >= 25 && bmi <= 29.9)
		{
			printf("Overweight:   between 25 and 29.9\n");
		}
		else if (bmi >= 30)
		{
			printf("Obese:        30 or greater    \n");
		}
	}
	system("pause");
	return 0;
}