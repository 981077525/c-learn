#include <stdio.h>
//简述一下static的使用方法

// 1. 修饰静态变量，会改变静态变量的生命周期，但不会改变他的作用域
int line(){
	static int a = 10;
	int b = 12;
	if (a < b)
	{
		a++;
		printf("你55555了\n");
	}
	else
	{
		printf("你66666666了\n");
	}
	return 0;
}
int main(){
	line();
	line();
	line();
	line();
	line();
	line();
	line();
	line();
	line();
	return 0;
}