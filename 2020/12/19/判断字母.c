#include <stdio.h>
#include <ctype.h>
//题目描述
//从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。
//输入描述 :
//多组输入，每行输入包括一个字符。
//输出描述 :
//针对每行输入，输出该字符是字母（YES）或不是（NO）。
int main()
{
	char a;
	while (scanf("%c\n", &a) == 1)
	{
		if (isalpha(a) != 0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	
	return 0;
}