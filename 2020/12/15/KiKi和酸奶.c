#include <stdio.h>

//题目描述
//BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。
//KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？
int Surplus(int n,int h, int m)
{
	int surplus, whole, zero;
	whole = m / h;
	if (( m % h ) == 0)
	{
		zero = 0;
	}
	else
	{
		zero = 1;
	}
	surplus = n - (whole + zero);
	return surplus;
}
int main()
{
	int n, h, m;
	scanf("%d %d %d",&n,&h,&m);
	printf("%d", Surplus(n, h, m));
	return 0;
}