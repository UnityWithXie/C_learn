#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>

//int main()
//{
//	int i = 2;
//	{
//		if (i == 0)
//			return ++i;
//		else
//			return i--;
//	}
//	printf("%d\n", i);
//	return 0;
//}

//int main()
//{
//	//��������
//	char password[20] = { 0 };
//	//char a_password[20] = { 0 };
//	printf("����������:\n");
//	scanf("%s", password);
//	//printf("���ٴ���������:\n");
//	//scanf("%s", a_password);
//	//printf("%s %s",password,a_password);
//	printf("��ȷ������(Y/N):\n");
//	//��������
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else if (ch == 'N')
//	{
//		printf("ȷ��ʧ��\n");
//	}
//	else
//	{
//		printf("����������%c,����ȷ�������´򿪳���",ch);
//		return 1;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= '0' && ch <= '9') || ch == ' ')
//		{
//			putchar(ch);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i < 11);
//	return 0;
//}

//n�Ľ׳�
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int pro = 1;
//	for (i = 1; i <= n; i++)
//	{
//		pro = pro * i;
//	}
//	printf("�׳�Ϊ%d", pro);
//	return 0;
//}

//����1��+2��+...+n!
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int pro = 1;
//	int sum = 0;
//	for (i = 1; i <= n; i++)
//	{
//		pro = pro * i;
//		sum = sum + pro;
//	}
//	printf("�׳����%d", sum);
//	return 0;
//}

//���ֲ���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	int k = 15;
//	int max = sizeof(arr) / sizeof(arr[0]);//���������С
//	int left = 0;
//	int right = max - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] == k)
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "asuna is beautiful!!!!";
//	char arr2[] = "######################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(500);//˯��0.5s
//		system("cls");//�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	//��������Ϊ"asuna"
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>\n");
//		scanf("%s", password);
//		if (strcmp(password, "asuna") == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			if(i<2)
//			{
//				printf("�������������%d�������������\n", 2 - i);
//			}
//		}
//	}
//	if (i == 3)
//	{
//		printf("�������������࣬�˳�����\n");
//	}
//	return 0;
//}


//��������Ϸ
//1.�������һ��1~100������
//2.���������������
// a. ����´��ˣ����߲�С�ˣ�Ҫ����ʾ����������
// b. ����¶��ˣ���ô��ϲ��ң���Ϸ����

#include <stdlib.h>//rand����ͷ�ļ�
#include <time.h>//time����ͷ�ļ�

void game()//��������Ϸ
{
	int guess = 0;
	int i = 1;
	int num = (rand()%100)+1;//ģ100���൱�����Ʒ�Χ0~99
	printf("����1~100�ķ�Χ������һ������\n");
	while (num)
	{
		scanf("%d", &guess);
		if (guess > num)
		{
			printf("�´���,�Ѳ�%d��\n",i++);
		}
		else if (guess < num)
		{
			printf("��С��,�Ѳ�%d��\n", i++);
		}
		else
		{
			printf("��ϲ�㣬�¶���,������%d��\n", i);
			break;
		}
	}
}

void menu()//��Ϸ�˵�
{
	printf("************************\n");
	printf("****** 1.��ʼ��Ϸ ******\n");
	printf("****** 0.�˳���Ϸ ******\n");
	printf("************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//��ӡһ����Ϸ�˵�
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}