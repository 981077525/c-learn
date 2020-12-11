#include <stdio.h>
int n_k(int n, int k)
{
	int num;
	if (k == 1)
	{
		return n;
	}
	else if (k == 0)
	{
		return 0;
	}
	k--;
	num = n_k(n, k);
	return n * num;
}
int main()
{
	int n, k;
	printf("请输入你要计算的数的次方，数和次方数以空格隔开");
	scanf("%d %d", &n, &k);
	printf("%d",n_k(n,k));
	return 0;
}