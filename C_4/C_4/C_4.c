#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////求两个整数中的较大值
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int max = Max(num1, num2);
//	printf("这两个数中%d较大", max);
//	return 0;
//}
// 
//输出小飞机
//int main()
//{
//	printf("     **     \n");
//	printf("     **     \n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *    \n");
//	printf("    *  *    \n");
//	return 0;
//}

//被5整除问题
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 5 == 0)
//		printf("YES");
//	else
//		printf("NO");
//	return 0;
//}

//选择语句多分支
//int main()
//{
//	float score;
//	scanf("%f", &score);
//	if (score >= 0 && score < 60)
//		printf("不及格\n");
//	else if (score >= 60 && score < 70)
//		printf("及格\n");
//	else if (score >= 70 && score < 85)
//		printf("良好\n");
//	else if (score >= 85 && score <= 100)
//		printf("优秀\n");
//	else
//		printf("输入分数不正确\n");
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (0 == num % 2)
//	{
//		printf("不是奇数\n");
//	}
//	else
//	{
//		printf("是奇数\n");
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	char a = 'a';
//	scanf("%c", &a);
//	switch (a)
//	{
//	case 'a':
//	case 'b':
//		printf("成功\n");
//		break;
//	case 'c':
//		printf("no\n");
//		break;
//	default:
//		printf("错了\n");
//		break;
//	}
//	return 0;
//}

int main()
{
	int i = 1;
	while (i <= 10)
	{
		printf("%d\n", i++);
	}
	return 0;
}