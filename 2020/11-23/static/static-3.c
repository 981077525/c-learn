// 3. 修饰函数，则在其他文件中即使使用void声明也无法调用，只能在当前文件调用
//此为文件1
#include <stdio.h>
//文件1定义的函数max
static int max(){
	printf("函数已经成功调用");
	return 0;
}
int main(){
	//此下行不会报错
	max();
	max();
	max();
	max();
	return 0;
}
//此为文件2
#include <stdio.h>
void a;
int main(){
	//即下行会报错
	max();
	return 0;
}