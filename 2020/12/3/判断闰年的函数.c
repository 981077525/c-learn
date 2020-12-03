#include <stdio.h>
/* 写一个函数，实现判断闰年的功能
闰年:
能被4整除，且不能被100整除，但又能被400整除的年份叫做闰年
*/
void RunYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
	{
		printf("%d年是闰年\n", year);
	}
	else if (year % 400 == 0)
	{
		printf("%d年是闰年\n", year);
	}
	else
	{
		printf("%d年不是闰年\n", year);
	}
}
int main()
{
	int year;
	printf("请输入你要判断的年份：\n");
	scanf("%d", &year);
	RunYear(year);
	return 0;
}