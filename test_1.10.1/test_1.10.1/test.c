#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


////窗口调试呵呵
////int main()
////{
////	printf("hehe\n");
////
////	return 0;
////
//////}
////include 是调用窗口-p
//////main函数是程序的入口
//////一个工程中main函数有而且仅有一个
////
////char 字符数据类型
////short 短整形
////int		整形
////long	长整形
////long long 更长的整型
////float 单精度浮点数
////double 双精度浮点数
//
//
//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	printf("%d\n", sizeof(long double));
//	return 0;
//}
//变量和常量的概念
//变量分为
//局部变量 - {}内部定义的变量
//全局变量 - {}外部定义的变量
//
//int b = 20;//quan ju bian liang
//
//int main()
//{
//	int a = 10;// 局部变量
//	return 0;
//
//}


//int a = 100;
//int main()
// {
//	 int a = 10;
//		 printf("a=%d\n", a);//当全局变量和局部变量的名字相同的情况下，局部优先
//
//		 return 0;
//
//
// }

  //但是建议不要把全局变量和局部变量写同样的名字，
 //这样也失去了他的唯一性独特性，不是说不可以 就是建议



//作业，写一个代码，计算两个整数的和
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//初始化数值 不是吧这个数限定为0的意思
//
//	// 输入两个整数 （&取地址）
//	scanf("%d %d", &num1, &num2);
//
//	//求和
//	int sum = num1 + num2;
//
//	//输出
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//测试链接

//初始化数值 不是吧这个数限定为0的意思

	// 输入两个整数 （&取地址）


	//求和

	//输出

//变量的作用域
//1. 局部变量
////局部变量的作用域是变量所在的局部范围
//
//全局变量
//全局变量的作用域是整个工程
//
//
//变量生命周期
//局部变量
//进入作用域声明周期开始，出作用域生命周期结束
//
//
//全局变量
//看你什么时候结束工程就是他的生命周期结束
//
//
//extern 调用来自外部的符号
//
//作用域强调范围， 生命周期强调过程