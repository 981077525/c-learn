#include<stdio.h>
/*
写一个递归函数，输出一个整数的每一位
*/
void print(int num)
{
	if (num > 9)
	{
		print(num / 10);
	}
	printf("%d  ", num % 10);
}

int main()
{
	int num;
	printf("请输入你要判断的数字：\n");
	scanf("%d", num);
	print(num);
	return 0;
}