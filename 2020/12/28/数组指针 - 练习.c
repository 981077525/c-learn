#include <stdio.h>
int main()
{
	//数组指针：本质上还是指针，只不过指的是数组的指针。
	//数组名为数组的首元素的首地址
	int a[] = { 1, 2, 3, 4 };
	printf("%d\n", sizeof(a)); //16
	printf("%d\n", sizeof(a + 0)); // 4
	printf("%d\n", sizeof(*a)); // 4
	printf("%d\n", sizeof(a + 1)); // 4
	printf("%d\n", sizeof(a[1])); // 4
	printf("%d\n", sizeof(&a)); // 4
	printf("%d\n", sizeof(*&a)); // 16
	printf("%d\n", sizeof(&a + 1)); // 4
	printf("%d\n", sizeof(&a[0]));  // 4
	printf("%d\n", sizeof(&a[0] + 1)); // 4

	printf("结果为：16 4 4 4 4 4 16 4 4 4\n");
	return 0;
}