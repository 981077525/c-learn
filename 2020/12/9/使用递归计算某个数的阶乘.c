#include <stdio.h>
//声明这个函数
int Factorial(int num)
{
	if (num <= 1)
		return num;
	return	num *  Factorial(num - 1);
}
int main()
{
	int num;
	printf("请输入你要计算阶乘的数：");
	scanf("%d",&num);
	printf("%d的阶乘为：%d\n", Factorial(num));
	return 0;
}