#include <stdio.h>
//二分查找
/*编写代码在一个整形有序数组中查找具体的某个数
要求：找到了就打印数字所在的下标，找不到则输出：找不到*/
int main()
{
	//定义这个整型有序数组
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 12, 13 };
	//获取数组中元素的个数
	int num = sizeof(arr) / sizeof(int);
	int left = 0;
	int right = num - 1;
	printf("请输入您要查找的数：");
	int search;
	scanf("%d", &search);
	for (int i = 0; i < num; i++)
	{
			int mid = (left + right) / 2;

			if (arr[mid] > search)
			{
				right = mid + 1;

			}
			else if (arr[mid]<search)
			{
				left = mid + 1;
			}
			else
			{
				printf("找到这个数了，这个数的下标为\"%d\"\n", mid);
				printf("这个数为\"%d\"\n", arr[mid]);
				break;
			}
	
		if (left > right)
		{
			printf("找不到这数！");

		}
	}
		
	return 0;
}