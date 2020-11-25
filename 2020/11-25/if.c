#include <stdio.h>

int main()
{
	//c语言中的if语句
	//具体使用方法：https://blog.csdn.net/qq_33685334/article/details/110149094
	int age = 0;
	printf("请输入你的年龄\n");
	scanf("%d", &age);
	if (age > 0 && age <= 18)
	{
		printf("少年\n");
	}
	else if (age < 30)
	{
		printf("青年\n");
	}
	else if (age < 55)
	{
		printf("壮年\n");
	}
	else
	{
		printf("老年\n");
	}
	return 0;
}