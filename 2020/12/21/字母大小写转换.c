#include <stdio.h>
//题目描述
//KiKi想完成字母大小写转换，有一个字符，判断它是否为大写字母，如果是，将它转换成小写字母；反之则转换为大写字母。
//输入描述 :
//多组输入，每一行输入一个字母。
//输出描述 :
//针对每组输入，输出单独占一行，输出字母的对应形式。
char ToggleCase(char c)
{
	if (c <= 'Z' && c>='A')
	{
		c = c + 32;
	}
	else
	{
		c = c - 32;
	}
	return c;
}
int main()
{
	char c;
	while (scanf("%c\n", &c) == 1)
	{
		printf("%c\n", ToggleCase(c));
	}
	return 0;
}