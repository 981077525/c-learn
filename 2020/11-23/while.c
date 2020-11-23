#include <stdio.h>
//了解一下c语言的三种循环语句
int main(){
	//第一种：while循环
	//while (这里填写循环成立的条件)
	//{
	//	这里写循环体;
	//}
	//break在while循环中的作用：
	//其实在循环中只要遇到break，就停止后期的所有的循环，直接终止循环。 所以：while中的
	//break是用于永久终止循环的。
	//例如：
	int codeline;
	printf("请输入你的代码行数\n");
	scanf("%d", &codeline);
	while (codeline < 10000)
	{
		printf("努力写代代码\n");
		codeline++;
	}
	return 0;
}