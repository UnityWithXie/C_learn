#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////�����������еĽϴ�ֵ
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
//	printf("����������%d�ϴ�", max);
//	return 0;
//}
// 
//���С�ɻ�
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

//��5��������
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

//ѡ�������֧
//int main()
//{
//	float score;
//	scanf("%f", &score);
//	if (score >= 0 && score < 60)
//		printf("������\n");
//	else if (score >= 60 && score < 70)
//		printf("����\n");
//	else if (score >= 70 && score < 85)
//		printf("����\n");
//	else if (score >= 85 && score <= 100)
//		printf("����\n");
//	else
//		printf("�����������ȷ\n");
//	return 0;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (0 == num % 2)
//	{
//		printf("��������\n");
//	}
//	else
//	{
//		printf("������\n");
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
//		printf("�ɹ�\n");
//		break;
//	case 'c':
//		printf("no\n");
//		break;
//	default:
//		printf("����\n");
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