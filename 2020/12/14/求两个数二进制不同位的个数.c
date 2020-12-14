#include <stdio.h>

int main()
{	
	int m, n,num = 0;
	printf("请输入两个整数：\n");
	scanf("%d %d",&m,&n);
	//位与操作，仅有1 & 1 = 1，其他全为0，只要判断出来操作之后的数，其二进制数中有几个零即可
	num = m ^ n;
	int count = 0;
	for (int i = 0; i < 33; i++)
	{
		if (num & 1 == 1)
		{
			count++;
		}
		num = num >> 1;
	}
	printf("%d", count);
	return 0;
}