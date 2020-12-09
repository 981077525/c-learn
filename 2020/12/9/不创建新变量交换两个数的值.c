#include <stdio.h>
int main()
{
	int a;
	int b;
	printf("请输入你要交换的两个数：");
	scanf("%d %d", &a, &b);
	a = a^b; //此时a为101^011 = 110 ->6
	b = a^b; //此时b为101^011^011 = 101 ->5
	a = a^b; //此时a为101^011^101 = 011 ->3
	printf("交换后的数为：%d %d", a, b);
	return 0;
}