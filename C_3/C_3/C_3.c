#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = -3;
//	printf("%d", ~a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ++a;
//	int c = a++;
//	printf("%d\n", a);//a=2
//	printf("%d\n", b);//b=1
//	printf("%d\n", c);//c=1
//
//	return 0;
//}

//int main()
//{
//	//ǿ������ת��
//	int a = (int)3.14;
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 2;
//	int b = 0;
//	int c = a && b;
//	int d = a || b;
//	printf("%d\n", c);//cΪ�٣�0
//	printf("%d\n", d);//dΪ�棬1
//	return 0;
//}

//int main()
//{
//	int a = 6;
//	int b = 0;
//	if ((a && ~b) == 1)
//	{
//		char d = 'a';
//		printf("%c\n", d);
//	}
//	else
//	{
//		char d = 'b';
//		printf("%c\n", d);
//	}
//	char c = (a && ~b) == 1 ? 'a' : 'b';//==��&&���ȼ�Ҫ��
//	printf("%c\n", c);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 0;//�Զ��������Զ����� - �Զ�����
//		//autoʡ�Ե��ˣ��µ�C�����﷨��Ҳ�������÷�
//	}
//	return 0;
//}

//int main()
//{
//	register int num = 100;//����num��ֵ����ڼĴ�����
//	return 0;
//}
// 
// 
// 
//typedef   ����������
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 6;
//	u_int num1 = 6;//����������ͬ
//	return 0;
//}
//void test()
//{
//	char a = 'a';
//	a++;
//	printf("%c\n", a);
//	
//}
//int main()
//{
//	int i = 0;
//	while (i < 6)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//void test()
//{
//	static char a = 'a';
//	a++;
//	printf("%c\n", a);
//
//}
//int main()
//{
//	int i = 0;
//	while (i < 6)
//	{
//		test();
//		char a = 'a';
//		printf("%c\n", a);
//		i++;
//	}
//	return 0;
//}

//extern char g_arr[];
//int main()
//{
//	printf("%s\n", g_arr);
//	return 0;
//}
//��������
//extern int Add(int, int);
//
//int main()
//{
//	int a = 5;
//	int b = 6;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//define ��һ��Ԥ��������
// 1.define�������

//#define  PI 3.14
//int main()
//{
//	printf("%f\n",PI);
//	return 0;
//}

//2.define�����
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 6 % ADD(1, 3));
//	return 0;
//}

//int main()
//{
//	int a = 6;//a���ڴ�����Ҫ����ռ�� - 4���ֽ�
//	printf("%p\n", &a);//%pר��������ӡ��ַ��
//	int * pa = &a;//pa��������ŵ�ַ�ģ���C������pa��ָ�����
//	//* ˵��pa��ָ�����
//	//int ˵��paָ��Ķ�����int���͵�
//	char ch = 'a';
//	char* pch = &ch;
//	*pch = 'w';//* �����ò���   *pch����ͨ��pch����ĵ�ַ�ҵ�ch
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}

//�ṹ������C���Դ�����µ�����

//����һ��ѧ������
struct stu
{
	char name[20];
	int age;//��Ա����
	double score;
};

int main()
{
	struct stu a = { "asuna",18,100 };//�����ͳ�ʼ��
	printf("1:%s %d %lf\n", a.name, a.age, a.score);//�ṹ�����.��Ա����
	struct stu *pa = &a;
	printf("2:%s %d %lf\n", (*pa).name, (*pa).age, (*pa).score);
	printf("3:%s %d %lf\n", pa->name, pa->age, pa->score);
	return 0;
}