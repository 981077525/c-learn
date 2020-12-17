#include <stdio.h>
int main()
{
	int weight, hight;

	while (scanf("%d %d\n", &weight, &hight) == 2)
	{
		float high2 = (float)hight / 100;
		float BMI = weight / (high2 * high2);
		if (BMI<18.5)
		{
			printf("Underweight\n");
		}
		else if (BMI >= 18.5 && BMI <= 23.9)
		{
			printf("Normal\n");
		}
		else if (BMI>23.9 && BMI <= 27.9)
		{
			printf("Overweight\n");
		}
		else
		{
			printf("Obese\n");
		}
	}
	return 0;
}