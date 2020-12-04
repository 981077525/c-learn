#include <stdio.h>
#include <math.h>
/*
根据给出的三角形3条边a, b, c（0 < a, b, c < 100,000），计算三角形的周长和面积。

周长公式：p=(a+b+c)/2
面积公式：S=[p(p-a)(p-b)(p-c)]**(1/2) //海伦公式
*/
int main()
{
	int a, b, c;
	float C, S;
	scanf("%d %d %d", &a, &b, &c);
	C = a + b + c;
	float p = (a + b + c) / 2.00;
	S = sqrt(p*(p - a)*(p - b)*(p - c));
	printf("circumference=%.2f area=%.2f", C, S);
}