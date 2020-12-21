#include <stdio.h>
//题目描述
//KiKi想知道一个整数的奇偶性，请帮他判断。从键盘任意输入一个整数（范围 - 231~231 - 1），编程判断它的奇偶性。
//输入描述 :
//多组输入，每行输入包括一个整数。
//输出描述 :
//针对每行输入，输出该数是奇数（Odd）还是偶数（Even）。
int IsParity(int num)
{
	if (num % 2 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int num;
	while (scanf("%d", &num) == 1)
	{
		if (IsParity(num))
		{
			printf("Even\n");
		}
		else
		{
			printf("Odd\n");
		}
	}
	return 0;
}