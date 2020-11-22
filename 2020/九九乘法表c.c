#include <stdio.h>
//目标：打印9*9乘法表
int main(){
	int a = 1;
	int b = 1;
	for (a = 1; a < 10; ++a)
	{
			for (b = 1; b <= a; ++b)
			{
				printf("%d * %d = %d  ", b, a,a*b);
				
			}
			printf("\n");
	}
	return 0;
}