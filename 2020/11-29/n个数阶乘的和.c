#include <stdio.h>
//输出n个数的阶乘的和

//先可以写一个求阶乘的函数
//参数a为所求阶乘的数
int factorial(int a)
{
	int factorial = 1;
	for (int i = 1; i <= a;i++)
	{
		factorial = i * factorial;
	}
	return factorial;
}
//主函数
int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		sum += factorial(i);
	}
	printf("%d", sum);
	return 0;
}