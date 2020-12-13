//题目描述
//依次输入一个学生的3科成绩，在屏幕上输出该学生的总成绩以及平均成绩。
//输入描述 :
//一行，3科成绩，成绩之间用一个空格隔开。
//输出描述 :
//一行，总成绩和平均成绩（小数点后保留两位），用一个空格隔开。
//示例1
//输入
//79.5 80.0 98.0
//输出
//257.50 85.83
#include <stdio.h>
int main()
{
	double achievement1 = 0.0;
	double achievement2 = 0.0;
	double achievement3 = 0.0;
	double sum = 0.0;
	double average = 0.0;
	scanf("%lf %lf %lf", &achievement1, &achievement2, &achievement3);
	sum = achievement1 + achievement2 + achievement3;
	average = sum / 3;
	printf("%.2lf %.2lf",sum,average);
	return 0;
}