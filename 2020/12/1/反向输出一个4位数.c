#include <stdio.h>
//将一个四位数，反向输出。
//一行，输入一个整数n（1000 <= n <= 9999）。
int main()
{
	int n;
	scanf("%d", &n);
	if (n >= 1000 && n <= 9999)
	{
		int n1 = n / 1000;
		int n2 = n % 1000 / 100;
		int n3 = n % 1000 % 100 / 10;
		int n4 = n % 1000 % 100 % 10;
		printf("%d%d%d%d", n4, n3, n2, n1);
	}
	return 0;
}