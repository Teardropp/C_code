#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	////���泣��
//		//30;
//		//9.9;
//		//'w';//�ַ�
//		//"zhiw";//�ַ���
//
//	////const ���εĳ�����,�������� ���������޸���ֵ ���е�a=20�Ѿ�û����
//		//const int a = 10;
//		//	a = 20;
//		//	printf("%d\n", a);
//
//		//int arr[10] = { 0 }; //10��λ�ñ������һ����������ôconst�ĳ�����Ҳ���ǳ�����
//		//const int n = 10;  //�滻���е�10 Ϊn֮���� �����в��ɹ� ��
//		//					//��ôҲ����˵������ֻ�Ǵ��ų������Եı�������
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
//////define����ı�ʶ������
//	printf("%d\n", MAX);
//	int a = MAX;
//	printf("%d\n", a);
//
//	return 0;
//}
//
////ö�ٳ���
//enum color
//{
//	//ö�ٳ���
//	red,
//	gueen,
//	bule,
//
//};
//enum gender
//{
//	//ö�ٳ���
//	male,
//	female,
//	secret,
//};
//int main()
//{
//	int num = 10;
//	enum color c = red;//��һ������ϵͳ����洢 color���ֵ�Ŀռ䣬����ö�������� ����ʹ���ˣ���������ռ�ռ�
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



//% s�Ǵ�ӡ�ַ�����
//% d�Ǵ�ӡ���͵�
//% c�Ǵ�ӡ�ַ���
//% f�Ǵ�ӡfloat���͵�����
//% lf�Ǵ�ӡdouble float ���͵�����
//% zu �Ǵ�ӡsizeof�ķ���ֵ
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

//ifѭ��
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("Ҫ�ú�ѧϰ��");
//	scanf("%d",&input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//	return 0;
//
//}

//while ѭ��
//int main()
//{
//	int line = 0;
//	printf("�������%d\n", line);
//
//	while (line<1000)
//
//	{
//		printf("д���룺%d\n", line);
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
//		printf("��������\n");
//	}
//
//	return 0;
//
//}

////����
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


	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };//����,�ڵ���� ����������±꣬
										   //�±��Ǵ�0��ʼ��
				
	//printf("%d\n", arr[8])

	// ��ӡ�����ÿһ��Ԫ��
	int i = 0;
	while (i<10)
		{

			printf("%d\n", arr[i]);
			i = i + 1;

		}

	return 0;

}
