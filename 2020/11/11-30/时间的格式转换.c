#include <stdio.h>
//题目：将输入的分钟数转换为用小时和分钟表示
int main()
{
	//存放输入的时间分钟数
	int time;
	//存放换算后的时间的小时部分
	int timeh;
	//存放换算后的时间的分钟部分
	int timem;
	//引导用户输入时间
	printf("请输入分钟数：");
	//获取用户输入的时间，并赋值给time变量
	scanf("%d", &time);
	//将获取到的用户输入的时间，进行计算
	//1.除以60并且返回值为整形，即取商，也为小时部分
	timeh = time / 60;
	//2.模除60返回值为整形，即取余数，也就为分钟部分
	timem = time % 60;
	//输入返回值
	printf("转换后的时间为：%d 小时，%d 分钟\n", timeh, timem);
	//程序结束
	return 0;
}