//c语言中的switch语句
//具体使用方法：https://blog.csdn.net/qq_33685334/article/details/110149094
#include <stdio.h>
int main()
{
	int day = 0;
	printf("请输入1-7的数字\n");
	scanf("%d",&day);
	switch (day)
	{
		case 1:
			printf("星期一\n");
			break;
		case 2:
			printf("星期二\n");
			break;
		case 3:
			printf("星期三\n");
			break;
		case 4:
			printf("星期四\n");
			break;
		case 5:
			printf("星期五\n");
			break;
		case 6:
			printf("星期六\n");
			break;
		case 7:
			printf("星期天\n");
			break;
	}
	return 0;
}