#include <stdio.h>
#define ARRNUM 3
void swap(int* a, int* b)
{
	*a = *a^*b;
	*b = *a^*b;
	*a = *a^*b;
}

void swap_arr(int* arr_a,int* arr_b)
{
	for (int i = 0; i < ARRNUM; i++)
	{
		swap(&arr_a[i], &arr_b[i]);
	}
}

int main()
{
	int a[3] = { 0, 1, 2 };
	int b[3] = { 3, 4, 5 };
	printf("原来a数组的值为：%d %d %d \n", a[0], a[1], a[2]);
	printf("原来b数组的值为：%d %d %d \n", b[0], b[1], b[2]);
	swap_arr(a, b);
	printf("交换后a数组的值为：%d %d %d \n", a[0], a[1], a[2]);
	printf("交换后b数组的值为：%d %d %d \n", b[0], b[1], b[2]);
	return;
}