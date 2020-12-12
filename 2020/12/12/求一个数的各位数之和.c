#include <stdio.h>
int num_sum(int num)
{
	if (num < 10)
	{
		return num;
	}
	return (num % 10) + num_sum(num / 10);
}
int main()
{
	int num;
	printf("请输入你要计算的数：");
	scanf("%d",&num);
	printf("%d",num_sum(num));
	return 0;
}