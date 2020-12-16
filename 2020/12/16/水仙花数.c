#include <stdio.h>
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
int Digit(int num)
{
	//digit是计算的该数的位数
	int n = 1;
	while (num > 9)
	{
		num = num / 10;
		n++;
	}
	return n;
}
//求n的k次方
int Power(int n,int k)
{
	if (n == 0)
	{
		return 0;
	}
	int product = 1;
	for (int i = 0; i < k; i++)
	{
		product *= n;
	}
	
	return  product;
}
//求该数是否为水仙花数
int Narcissus(int num)
{
	int n = Digit(num);
	int sum = 0;
	int number = num;
	for (int i = 0; i < n; i++)
	{
		sum += Power(number % 10, n);
		number =  number / 10;
	}
	if (sum == num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	//返回值说明：为1则是水仙花数，为0则不是水仙花数
}
int main()
{
	for (int i = 0; i < 10000; i++)
	{
		if (Narcissus(i) == 1)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}