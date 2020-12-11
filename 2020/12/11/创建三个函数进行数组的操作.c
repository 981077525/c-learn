#include <stdio.h>
/*
创建一个整形数组，完成对数组的操作
实现函数init() 初始化数组为全0
实现print()  打印数组的每个元素
实现reverse()  函数完成数组元素的逆置。
要求：自己设计以上函数的参数，返回值。
*/

//初始化数组为全0
void init(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
//打印数组的每个元素
void print(int* arr, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d  ",arr[i]);
	}
}
//完成数组元素的逆置
void reverse(int* arr, int sz)
{
	if (sz % 2 == 0)
	{
		for (int i = 0; i < (sz / 2); i++)
		{
			int tmp;
			tmp = arr[i];
			arr[i] = arr[sz - i - 1];
			arr[sz - i - 1] = tmp;
		}
	}
	else
	{
		for (int i = 0; i < ((sz-1)/2); i++)
		{
			int tmp;
			tmp = arr[i];
			arr[i] = arr[sz - i-1];
			arr[sz - i-1] = tmp;
		}
	}

}

int main()
{
	int a[] = { 1, 2, 3 ,4};
	int sz = sizeof(a) / sizeof(int);
	printf("打印这个数组：");
	print(a, sz);
	printf("\n");
	printf("数组元素的逆置：");
	reverse(a, sz);
	print(a,sz);
	printf("\n");
	init(a,sz);
	printf("进行数组初始化后：");
	print(a, sz);
	
	return 0;
}