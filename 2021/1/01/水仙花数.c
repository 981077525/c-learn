#include <stdio.h>
//水仙花数


//计算一个数a的b次方
int power(int a, int b)
{
	int sum = 1;
	for (int i = 0; i<b; i++)
	{
		sum *= a;
	}
	return sum;
}
//计算一个数有多少位
int digit(int num)
{
	int count = 0;
	while (num>0)
	{
		num /= 10;
		count++;
	}
return count;
}
//判断是否为水仙花数
//如果是则返回1；不是返回0
int narcissusNumber(int num)
{
	int digit1 = digit(num);
	int sum = 0;
	int num2 = num;
	for (int i = 0; i<digit1; i++)
	{
		int a = num2 % 10;
		int r = power(a, digit1);
		num2 /= 10;
		sum += r;
	}
	if (sum == num)
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
	for (int i = 0; i < 1000; i++)
	{
		if (narcissusNumber(i) == 1)
		{
			printf(" %d ",i);
		}
	}
	return 0;
}