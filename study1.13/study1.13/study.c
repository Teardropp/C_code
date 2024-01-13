#define _CRT_SECURE_NO_WARNINGS

//类型重命名 ；注意 只能对类型重命名
//typedef unsigned int uint;
//
//typedef struct node
//{
//	int data;
//	struct node* next
//	 
//}node;
//int main()
//{
//	unsigned int num = 0;
//	uint num2 = 1;
//	struct node n;
//	node n2;
//
//	return 0;
//
//}


//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数
//
#include<stdio.h>
//void test()
//{
//	int  a = 1;
//	a++;
//
//	printf("%d", a);
//
//
//}//a在函数作用域内生效，出作用域就消失
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	//a是打印什么，i是打印多少次
//	}
//	return 0;
//
//


//
//void test()
//{
//	//修饰局部变量
//	static int  a = 1;
//	a++;
//
//	printf("%d", a);
//
//
//	//static修饰局部变量的时候，局部变量出了作用域，
//	//不销毁的本质上，static修饰局部变量的时候，改变了变量的存储位置的。
//
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	//a是打印什么，i是打印多少次
//	}
//	return 0;



//声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//声明外部函数，
//全局变量和函数都具有外部链接属性
//extern int Add(int x, int y);
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);
//	printf("%d\n", z);
//	return 0;
//
//}


//int main()
//{
//
//	//寄存器变量
//	register int num = 3;
//	//建议：存放在寄存器中
//	return 0;
//}

////define定义标识符常量
//#define num 100
//
////#define 定义宏
////宏是有参数
//#define ADD(x,y)((x)+(y))
//
//
//int main()
//{
//	//printf("%d\n", num);
//
//	//int n = num;
//	//printf("%d\n", n);
//
//	//int arr[num] = { 0 };
//
//	int a = 10;
//	int b = 20;
//	int c = ADD(a,b);
//
//	printf("%d\n", c);
//
//
//	return 0;
//}
//指针
//int main()
//{
//	int a = 10; //向内存申请4个字节，存储10
//	//& a；///取地址操作符
//	//printf("%p\n", &a);//0x0012ff40
//	int* p = &a;
//	//p就是指针变量
//	*p = 20;//解引用操作符，意思就是通过p中存放的地址，找到p所指向的对象，*p就是p所指向的对象
//
//	printf("%d\n", a);
//
//	//char ch = 'w'
//	//char * pc = &ch
//
//	return 0;
//
//}

int main()
{
	//int*p
	//char* p2;
	//不管是什么类型的指针，都是在创建指针变量
	//指针变量是用来存放地址的
	//指针变量的大小取决于一个地址存放的时候需要多大空间
	//32位机器上的地址：32 bit位 - 4byte ,所以指针变量大小是4字节
	//64位机器上的地址：64 bit位 - 8byte，所以指针变量大小是8字节



	printf("%zu\n", sizeof(char*));//4
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(double*));


	return 0;
}


////学生
//struct stu
//{
//	//成员
//	char name[20];
//	char sex[10];
//	char tele[12];
//	int age;
//
//};
//
//void print(struct stu* pa)
//{
//
//	printf("%s %s %s %d\n", (*pa).name, (*pa).sex, (*pa).tele, (*pa).age);
//	//->
//	//结构体指针变量->成员名
//	printf("%s %s %s %d\n", pa->tele, pa->name, pa->sex, pa->age);
//
//}
//
//int  main()
//{
//	struct stu a = { "zhangsan","nan","155599144",20 };
//
//	//点操作符的用法：结构体对象.成员名
//	printf("%s %s %s %d\n", a.name, a.sex, a.tele, a.age);
//	//顺序不能乱 必须一对一 
//	//1.13出现错误，下行print打成printf 窗口只出现zhangsan
//	print(&a);
//
//	return 0;
//}


//作业


//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int abb = a / b;
//
//	int acc = a % b;
//	printf("%d %d\n", abb, acc);
//
//	
//
//	return 0;
//}