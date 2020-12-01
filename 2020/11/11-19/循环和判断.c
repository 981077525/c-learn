//引入头文件
//主要是使用printf函数和scanf函数
#include <stdio.h>
//C语言的循环有三种，但是由于我目前只学习了其中一种，就先简单的以此为例。
//学习了if语句的判断
//学习了while循环
//在接下来就进行两个语法作一个简单的案例说明
int main()
{
	
	
	printf("请输入你的代码数\n");
	//定义一个变量
	int codeline = 0;
	//引导用户输入
	scanf("%d", &codeline);
	//输出提示信息
	printf("您的代码行数为%d\n", codeline);
	//下面是循环体
	while (codeline < 10000){
	printf("努力写代码\n");
	codeline+=1;
	}
	//下面是判断的过程
	if (codeline >= 10000){
		printf("恭喜你，你已经成为一个合格的程序员，给你发offer“)
	}

	return 0;
}
