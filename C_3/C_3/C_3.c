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
//	//强制类型转换
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
//	printf("%d\n", c);//c为假，0
//	printf("%d\n", d);//d为真，1
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
//	char c = (a && ~b) == 1 ? 'a' : 'b';//==比&&优先级要高
//	printf("%c\n", c);
//	return 0;
//}

//int main()
//{
//	{
//		int a = 0;//自动创建，自动销毁 - 自动变量
//		//auto省略掉了，新的C语言语法中也有其他用法
//	}
//	return 0;
//}

//int main()
//{
//	register int num = 100;//建议num的值存放在寄存器中
//	return 0;
//}
// 
// 
// 
//typedef   类型重命名
//typedef unsigned int u_int;
//int main()
//{
//	unsigned int num = 6;
//	u_int num1 = 6;//两个命令相同
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
//声明函数
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
//define 是一个预处理命令
// 1.define定义符号

//#define  PI 3.14
//int main()
//{
//	printf("%f\n",PI);
//	return 0;
//}

//2.define定义宏
//#define ADD(X,Y) ((X)+(Y))
//int main()
//{
//	printf("%d\n", 6 % ADD(1, 3));
//	return 0;
//}

//int main()
//{
//	int a = 6;//a在内存中是要分配空间的 - 4个字节
//	printf("%p\n", &a);//%p专门用来打印地址的
//	int * pa = &a;//pa是用来存放地址的，在C语言中pa叫指针变量
//	//* 说明pa是指针变量
//	//int 说明pa指向的对象是int类型的
//	char ch = 'a';
//	char* pch = &ch;
//	*pch = 'w';//* 解引用操作   *pch就是通过pch里面的地址找到ch
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

//结构体能让C语言创造出新的类型

//创建一个学生类型
struct stu
{
	char name[20];
	int age;//成员变量
	double score;
};

int main()
{
	struct stu a = { "asuna",18,100 };//创建和初始号
	printf("1:%s %d %lf\n", a.name, a.age, a.score);//结构体变量.成员变量
	struct stu *pa = &a;
	printf("2:%s %d %lf\n", (*pa).name, (*pa).age, (*pa).score);
	printf("3:%s %d %lf\n", pa->name, pa->age, pa->score);
	return 0;
}