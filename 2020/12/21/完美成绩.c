#include <stdio.h>
//题目描述
//KiKi想知道他的考试成绩是否完美，请帮他判断。从键盘输入一个整数表示的成绩，编程判断成绩是否在90~100之间，如果是则输出“Perfect”。
//
//输入描述 :
//多组输入，每行输入包括一个整数表示的成绩（90~100）。
//输出描述 :
//针对每行输入，输出“Perfect”。
int achievement(int num)
{
	if (num >= 90 && num <= 100)
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
	int num;
	while (scanf("%d", &num) == 1)
	{
		if (achievement(num))
		{
			printf("Perfect\n");
		}
	}
	return 0;
}