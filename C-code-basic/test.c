#define _CRT_SECURE_NO_WARNINGS 1//定义预定义符号：_CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//使用别人的东西需要打招呼-#include，#是一种指令形式，include指包含
//包含一个叫stdio.h的文件，使用<>包起来：std-标准，io-输入输出
//当使用输入、输出函数时，需用到

//主函数前的int 表示主函数调用返回一个整型值
//int main()//主函数-程序的入口，只能有一个
//{
//	printf("hello world\n");//打印函数printfunction
//	printf("你好！");

//	//打印不同类型变量数据向内存申请的空间
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;//返回0
//}


short age = 20;//向内存申请空间-变量类型 变量名 = 值；在函数外为global，函数内即{}内为local
int main()
{
	//使用本文件外的 工程内的变量时，需要声明，否则报错
	//使用extern 变量类型 变量名
	extern int g_val;
	printf("g_val = %d\n", g_val)；
	return 0;
}


int main()
{
	//计算2个数的和
	int num1 = 0;
	int num2 = 0;
	int sum = 0; //C语言语言规定：变量要定义在当前代码块的最前面
	//输入数据-使用输入函数scanf
	scanf("%d%d", &num1, &num2);//&为取地址符号-将mum1和mum3放入取到的地址
	sum = num1 + num2;
	printf("sum = %d\n", sum);
	return 0;
}