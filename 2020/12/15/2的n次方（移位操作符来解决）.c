#include <stdio.h>
int main()
{
	int count;
	//此处需要注意的是scanf也是有返回值的，其返回值为赋值成功的个数
	while (scanf("%d", &count) != EOF)
	{
		printf("%d\n", 2 << (count - 1));
	}
	return 0;
}