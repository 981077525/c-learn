#include <stdio.h>
#define NUM 5
//冒泡排序:降序
int main()
{
	int arr[NUM];
	printf("请输入%d个数:", NUM);
	for (int i = 0; i < NUM; i++)
	{
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < NUM; i++)
	{
		for (int j = 0; j < NUM; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int num;
				num = arr[j];
				arr[j] = arr[j+1];
				arr[j + 1] = num;
			}
		}
	}
	for (int i = 0; i < NUM; i++)
	{
		printf("%d  ", arr[i]);
	}
	return 0;
}