
#define _CRT_SECURE_NO_WARNINGS

//全局变量
//int g_val = 2024;

//static int g_val = 2024;

 //static修饰全局变量的时候，
//这个全局变量的外部链接属性
//就变成了内存链接属性
//其他源文件.c就不能再使用到这个全局变量了
//下列函数同理 加了static就改变链接属性了
//
//int Add(int x, int y)
//{
//	return x + y;
//}