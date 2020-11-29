//2分法查询数据
#include <stdio.h>
int main()
{	
	//先定义目标数组
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	//给定一个0-9的随机数
	int n = srand(time(0)) % 10;
	printf("%d\n", n);
	//下面开始写业务逻辑
	int left = 0;
	int right = sizeof(arr) / sizeof(int);
	//
	int mid;
	while (left < right)
	{
		mid = (left + right) / 2;
		if (arr[mid] < n)
		{
			left = mid - 1;
		}
		else if (arr[mid] > n)
		{
			right = mid+1;
		}
		else
		{
			printf("找到这个数了，这个数为：%d\n", arr[mid]);
			break;
		}
	}

	

	return 0;
}