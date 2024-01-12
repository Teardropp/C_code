#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	////字面常量
//		//30;
//		//9.9;
//		//'w';//字符
//		//"zhiw";//字符串
//
//	////const 修饰的常变量,就是锁定 不给别人修改数值 下列的a=20已经没用了
//		//const int a = 10;
//		//	a = 20;
//		//	printf("%d\n", a);
//
//		//int arr[10] = { 0 }; //10的位置必须放置一个常量，那么const的常变量也算是常量吗
//		//const int n = 10;  //替换上行的10 为n之后发现 他运行不成功 ，
//		//					//那么也就是说常变量只是带着常量属性的变量罢了
//
//
//
//
//
//
//
//	return 0;
//
//
//}

#define MAX 100

//int main()
//{
//////define定义的标识符常量
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//
//	return 0;
//}
//
////枚举常量
//enum color
//{
//	//枚举常量
//	red,
//	gueen,
//	bule,
//
//};
//enum gender
//{
//	//枚举常量
//	male,
//	female,
//	secret,
//};
//int main()
//{
//	int num = 10;
//	enum color c = red;//这一步是象系统申请存储 color这个值的空间，上面枚举是数据 不算使用了，所以他不占空间
//	red = 20; //err
//	male = 10;//err
//
//	return 0;
//}
//

//
//int main()
//{
//
//
//	return 0;
//
//}



//% s是打印字符串的
//% d是打印整型的
//% c是打印字符的
//% f是打印float类型的数据
//% lf是打印double float 类型的数据
//% zu 是打印sizeof的返回值
//int main()
//{
//	/*printf("%s\n", "(are you ok\?\?)");
//	(are you ok]
//	printf("%c\n", '\'');
//	printf("abcedf\n");
//	//printf("\"");*/
//	//printf("abcd\\0df");
//	//printf("c:\\text\\test.c");
//	//printf("\a");
//	//printf("abc\nedef");
//	//printf("abc\tdef");
//	/*printf("%c\n",'\130');
//	printf("%c\n",'\x063');*/
//
//	return 0;

//}

//if循环
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("要好好学习吗？");
//	scanf("%d",&input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//
//}

//while 循环
//int main()
//{
//	int line = 0;
//	printf("加入比特%d\n", line);
//
//	while (line<1000)
//
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//	if (line >= 1000)
//	{
//
//		printf("nice offer\n");
//
//	}
//	else
//	{
//		printf("继续加油\n");
//	}
//
//	return 0;
//
//}

////函数
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	scanf("%d %d", &n1, &n2);
//
//
//	int sum = add(n1, n2);
//
//	printf("%d\n", sum);
//	return 0;
//
//}
//



int main()
{
	/*int a = 10;
	int b = 12;
	int c = 13;
	.
	.
	.
	.
	*/


	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//数组,内的序号 叫做数组的下标，
										   //下标是从0开始的
				
	//printf("%d\n", arr[8])

	// 打印数组的每一个元素
	int i = 0;
	while (i<10)
		{

			printf("%d\n", arr[i]);
			i = i + 1;

		}

	return 0;

}
