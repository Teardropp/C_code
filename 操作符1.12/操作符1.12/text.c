#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	//int a = 7 / 2;
//	//int b = 20 % 3;//取膜    v/z =取整数+余（模） 20/3=2*9+2 ；17/2=2*8+1
//	//printf("%d\n", a);
//	//printf("%d\n", b);
//
//	////除号的两端都是整数的时候，执行的是整数的除法，如果两端有一个浮点数就会执行浮点数的除法
//
//	int a = 7 / 2.0;
//	int b = 20 % 3;
//	//取膜操作符的两端数字必须是整数。
//	printf("%f\n", a);//%f打印小数点，只想打印一位就%.1f
//	printf("%d\n", b);
//
//	return 0;
//}
//
//c语言中
//0表示假的
//非零表示真的 ,-1也是真
//|\0表示真假


//单目操作符
// 
//int main()
//{
//	//int flag = 2;
//	//if (!flag);//单目操作符
//
//	//{
//	//
//	//	printf("hehe\n");
//
//	//}
//
//	//int a = -10;
//	//int b = -a;//负负得正
//	//int b = +a;
//	//printf("%d\n", b);
//	//printf("%d\n", b);
//
//	//sizeof是操作符， 是单目操作符不要当成函数
//
//	//int a = 10;
//	//pirntf("%d\n", sizeof(a));//4
//	//pirntf("%d\n", sizeof(int));//4
//	//pirntf("%d\n", sizeof a );//4
//
//	//int arr[10] = { 0 };
//	//pirntf("%d\n", sizeof (arr) );//40
//	//pirntf("%d\n", sizeof ([0]) );//4
//	//pirntf("%d\n", sizeof (arr)/sizeof([0] ));//4
//	
//	//int a = 10;
//	//int b = a++;//后置++，先使用，后++（++是自增 +1的意思）
//	////int b = a; a=a+1	
//	// int b = ++a;//后置++，先使用，后++（++是自增 +1的意思）
//	////int  a=a+1 ;b = a
//	//
//	//printf("%d\n",a);
//	//printf("%d\n",b);
//
//
//	//int a = 3.14;
//	//int a = (int)3.14;//强制类型转换
//	////字面浮点数，编译器默认理解为double类型
//
//	//printf("%d\n",a)
//
//
//	return 0;
//
//}



////关系操作符(容易操作错误的)
//int main()
//{
//
//	int a = 10;
//	if (a = 3)
//	{
//
//		printf("hehe\n");
//
//	}
//	//此时会打印hehe，是因为a =3 被赋值，如果括号内a==3 的话就不会出现hehe
//
//
//
//
//	return 0;
//
//}


////逻辑操作符
//int main()
//{
//	//&&逻辑与-并且
//	//||逻辑或-或者
//
//	//int a = 0;
//	//int b = 20;
//	//if (a && b)//if是真条件才会出现结果
//	//{
//	//	printf("hehe\n");
//	//}
//	
//	//int a = 0;
//	//int b = 20;
//	//if (a || b)
//	//{
//	//	printf("hehe\n");
//	//}
//
//	return 0;
//}

//条件操作符
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int r =( a > b ? a : b);
//
//
//	return 0;
	
	
//逗号表达式就是用逗号的一串表达式
//逗号表达式特点是：从左到右依次计算，整个表达式是最后 一个表达式的结果
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;
//
//	//      c=8     a=28   5
//	int r =(c=a-2 ,a=b+c,c-3);
//
//	printf("%d\n", r);
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9 };
//	arr[3];//[]就是下标引用操作符  arr和3就是[]的操作数
//	//a+b
//	return 0;
//}


int main()
{
	int a = 10;//自动变量 ，出作用域就销毁，aoto可被省略



	return 0;
}