#include <stdio.h>
#include <string.h>
//1.递归实现strlen
int strlen_recursion(char *str)
{
	static int count = 0;
	if (str[count] == '\0')
		return 0;
	count += 1;
	strlen_recursion(str);
	return count;
}

//2.非递归实现strlen
int strlen_func(char* str)
{
	int i =0;
	while (1)
	{
		if (str[i] == '\0')
		{
			break;
		}
		i += 1;
	}
	return i;
}

int main()
{	
	char str[30] = "qiufengyaju";
	printf("%s\n", str);
	printf("使用strlen计算的字符串长度：%d \n",strlen(str));
	printf("使用递归计算的字符串长度：%d\n", strlen_recursion(str));
	printf("使用函数计算的字符串长度：%d\n",strlen_func(str));
	return 0;
}