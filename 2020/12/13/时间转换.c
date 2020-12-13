//题目描述
//给定秒数seconds(0< seconds < 100, 000, 000)，把秒转化成小时、分钟和秒。
//
//输入描述 :
//一行，包括一个整数，即给定的秒数。
//输出描述 :
//一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。
//示例1
//输入
//复制
//3661
//输出
//复制
//1 1 1
#include<stdio.h>
int main()
{
	int seconds;
	scanf("%d",&seconds);
	int hour, minute, second;
	hour = seconds / (60 * 60);
	minute = (seconds - (hour * 60 * 60)) / 60;
	second = seconds - ((minute * 60) + (hour * 60 * 60));
	printf("%d %d %d",hour,minute,second);
	return 0;
}