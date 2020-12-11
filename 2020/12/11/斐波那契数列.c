#include <stdio.h>
//递归
int Fibonacci_recursion(int count)
{
	if (count <= 2)
	{
		return 1;
	}
	return Fibonacci_recursion(count - 1) + Fibonacci_recursion(count - 2);
}
//非递归
int Fibonacci_func(int count) {
	if (count < 1) {
		//即错误
		return -1;
	}
	if (count == 1 || count == 2) {
		return 1;
	}
	int f1 = 1;
	int f2 = 1;
	int f3 = 2;
	for (int i = 3; i <= count; ++i) {
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
	}
	return f3;
}
int main()
{
	int count;
	printf("请输入你要求第几个斐波那契数：");
	scanf("%d",&count);
	printf("递归实现的：%d\n", Fibonacci_recursion(count));
	printf("非递归实现的：%d\n", Fibonacci_func(count));
	return 0;
}