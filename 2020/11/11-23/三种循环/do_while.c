#include <stdio.h>

	//第三种：do while循环
	//do语句的特点
	//循环至少执行一次，使用的场景有限，所以不是经常使用。
	//------------------------------------
	//do
	//{
	//	语句块 1
	//} while (表达式 1);
	//------------------------------------
	//do while循环中的break和continue和for和while
	//例如：
int main()
{
	int i = 10;
	do
	{
		printf("%d\n", i);
	} while (i<10);
	return 0;
}