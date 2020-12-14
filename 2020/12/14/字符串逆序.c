#include <stdio.h>
#include <string.h>
void Reverse(char* str, int num)
{
	char tmp;
	for (int i = 0; i < num - i - 1; i++)
	{
		tmp = str[i];
		str[i] = str[num - i - 1];
		str[num - i - 1] = tmp;
	}
}
int main()
{
	char* str[30];
	printf("请输入你要逆置的字符串：\n");
	scanf("%s", str);
	Reverse(&str, strlen(str));
	printf("%s", str);
	return 0;
}