//引入头文件
//主要是使用printf函数和scanf函数
#include <stdio.h>
//写一个简单的函数
//具体功能如下：
//输入的两个参数，将他们的值进行相加，返回他们的和
Add(int a, int b){//两个参数为整型
	//将两个参数相加，并赋值给整型c
	int c = a + b;
	//得到计算结果后，将值返回
	return c;
}

int main()
{
	//定义两个变量，类型都是整型
	int num1 = 0;
	int num2 = 0;
	//通过scanf函数获取客户端的两个值，并将他们从内存中提取出来，并且赋值给前面定义的两个变量
	scanf("%d %d",&num1,&num2);
	//调用函数，传入实参，并将返回值赋值给sum变量
	int sum = Add(num1,num2);
	//将计算的值进行打印
	printf("%d\n", sum);
	return 0;
}
