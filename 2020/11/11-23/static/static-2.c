// 2. 修饰全局变量，则在其他文件中即使使用extern声明也无法调用，只能在当前文件调用
//此为文件1
#include <stdio.h>
//文件1定义的全局变量a
int a = 100;
int main(){
	//此下行不会报错
	printf("%d", a);
	return 0;
}
//此为文件2
#include <stdio.h>
extern a;
int main(){
	//即下一行会报错
	printf("%d"，a);
	return 0;
}