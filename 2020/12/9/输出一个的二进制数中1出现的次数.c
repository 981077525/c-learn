#include <stdio.h>
int main()
{
	//写一个函数返回参数二进制中 1 的个数。
	int num;
	int count = 0;
	printf("请输入你要判断的数：");
	scanf("%d",&num);
	for (int i = 0; i < 32;i++)
	{
		//给该数与上一个1 即二进制数为 00000000 00000000 00000000 00000001
		//即除了最后一位可能不为0外，其余位置全为0
		//当最后一位为1时，结果为1，为0时，结果为0
		if (num & 1 == 1)
		{
			count++;
		}
		num >>= 1;
	}
	printf("%d", count);
	return 0;
}