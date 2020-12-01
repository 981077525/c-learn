# include <stdio.h>
//编写程序数一下 1到 100 的所有整数中出现多少个数字9
int main()	
{
	int num = 0; 
	for (int i = 1; i < 100; i++)
	{
		int ge = i % 10;
		int ten = i / 10;
		if (ge == 9 || ten == 9)
		{
			num = num + 1;
		}
	}
	printf("9的个数为：%d\n", num);
	return 0;
}