#include<stdio.h>

void BubbleSort(int arr[], int len)
{
	int i, j;
	int tem;
	for (i = len - 1; i > 0; i--)
	{
		for (j = 0; j<i; j++)
		{
			if (arr[j]<arr[j + 1])
			{
				tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;
			}
		}
	}
}
int main()
{
	int n;
	int arr[40] = { 0 };
	printf("请输入有多少个人：\n");
	scanf("%d", &n);
	for (int i = 0; i<n-1; i++)
	{
		scanf("%d ", &arr[i]);
	}
	BubbleSort(arr, n);
	for (int i = 0; i<5; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}