#define _CRT_SECURE_NO_WARNINGS

//���������� ��ע�� ֻ�ܶ�����������
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
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���
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
//}//a�ں�������������Ч�������������ʧ
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	//a�Ǵ�ӡʲô��i�Ǵ�ӡ���ٴ�
//	}
//	return 0;
//
//


//
//void test()
//{
//	//���ξֲ�����
//	static int  a = 1;
//	a++;
//
//	printf("%d", a);
//
//
//	//static���ξֲ�������ʱ�򣬾ֲ���������������
//	//�����ٵı����ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ�õġ�
//
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	//a�Ǵ�ӡʲô��i�Ǵ�ӡ���ٴ�
//	}
//	return 0;



//�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}

//�����ⲿ������
//ȫ�ֱ����ͺ����������ⲿ��������
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
//	//�Ĵ�������
//	register int num = 3;
//	//���飺����ڼĴ�����
//	return 0;
//}

////define�����ʶ������
//#define num 100
//
////#define �����
////�����в���
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
//ָ��
//int main()
//{
//	int a = 10; //���ڴ�����4���ֽڣ��洢10
//	//& a��///ȡ��ַ������
//	//printf("%p\n", &a);//0x0012ff40
//	int* p = &a;
//	//p����ָ�����
//	*p = 20;//�����ò���������˼����ͨ��p�д�ŵĵ�ַ���ҵ�p��ָ��Ķ���*p����p��ָ��Ķ���
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
	//������ʲô���͵�ָ�룬�����ڴ���ָ�����
	//ָ�������������ŵ�ַ��
	//ָ������Ĵ�Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ�
	//32λ�����ϵĵ�ַ��32 bitλ - 4byte ,����ָ�������С��4�ֽ�
	//64λ�����ϵĵ�ַ��64 bitλ - 8byte������ָ�������С��8�ֽ�



	printf("%zu\n", sizeof(char*));//4
	printf("%zu\n", sizeof(short*));
	printf("%zu\n", sizeof(int*));
	printf("%zu\n", sizeof(float*));
	printf("%zu\n", sizeof(double*));


	return 0;
}


////ѧ��
//struct stu
//{
//	//��Ա
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
//	//�ṹ��ָ�����->��Ա��
//	printf("%s %s %s %d\n", pa->tele, pa->name, pa->sex, pa->age);
//
//}
//
//int  main()
//{
//	struct stu a = { "zhangsan","nan","155599144",20 };
//
//	//����������÷����ṹ�����.��Ա��
//	printf("%s %s %s %d\n", a.name, a.sex, a.tele, a.age);
//	//˳������ ����һ��һ 
//	//1.13���ִ�������print���printf ����ֻ����zhangsan
//	print(&a);
//
//	return 0;
//}


//��ҵ


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