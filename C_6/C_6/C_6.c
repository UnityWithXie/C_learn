#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���������Ӵ�С�������
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int max = 0;
//	int mid = 0;
//	int min = 0;
//	scanf("%d%d%d", &num1, &num2, &num3);
//	
//	if (num1 > num2)
//	{
//		if (num1 > num3)
//		{
//			if (num2 > num3)
//			{
//				max = num1;
//				mid = num2;
//				min = num3;
//			}
//			else
//			{
//				max = num1;
//				mid = num3;
//				min = num2;
//			}
//			
//		}
//		else
//		{
//			max = num3;
//			mid = num1;
//			min = num2;
//		}
//	}
//	else
//	{
//		if (num2 > num3)
//		{
//			if (num1 > num3)
//			{
//				max = num2;
//				mid = num1;
//				min = num3;
//			}
//			else
//			{
//				max = num2;
//				mid = num3;
//				min = num1;
//			}
//		}
//		else
//		{
//			max = num3;
//			mid = num2;
//			min = num1;
//		}
//	}
//
//	printf("%d %d %d", max, mid, min);
//	return 0;
//}

//��ӡ1~100��3�ı���
//int main()
//{
//	int i = 1;
//	int ret = 1;
//	for (i = 1; i<34; i++)
//	{
//		ret = 3 * i;
//		printf("%d ", ret);
//	}
//	return 0;
//}

//�������������Լ��
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int tmp = 0;
//	int i = 0;
//	int max = 0;
//	scanf("%d%d", &num1, &num2);
//	if (num1 > num2)
//	{
//		tmp = num1;
//		num1 = num2;
//		num2 = tmp;
//	}
//	//for (i = num1;i > 0; i--)
//	//{
//	//	if ((num1 % i == 0) && (num2 % i == 0))
//	//	{
//	//		printf("���Լ��Ϊ%d", i);
//	//		break;
//
//	//	}
//	//}
//
//	//շת�����
//	while(1)
//	{
//		max = num2 % num1;
//		if (max == 0)
//		{
//			printf("���Լ����%d",num1);
//			break;
//		}
//		else
//		{
//			num2 = num1;
//			num1 = max;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d", &num1, &num2);
//	while (max = num1 % num2)
//	{
//		num1 = num2;
//		num2 = max;
//	}
//	printf("���Լ����%d", num2);
//	//��С������ = num1*num2/���Լ��;
//	return 0;
//}

//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i < 2001; i++)
//	{
//		if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//��ӡ100��200֮�������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i < 201; i++)
//	{
//		for (j = i - 1; j > 1; j--)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == 1)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//��ֹػ�����
//#include <stdlib.h>
//#include <string.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ĵ��Խ���60���ڹػ�����˵��\"asuna��Ư����\"������ȡ��\n");
//		scanf("%s", input);
//
//		if (strcmp(input, "asuna��Ư����") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}