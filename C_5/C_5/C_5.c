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
//	//输入密码
//	char password[20] = { 0 };
//	//char a_password[20] = { 0 };
//	printf("请输入密码:\n");
//	scanf("%s", password);
//	//printf("请再次输入密码:\n");
//	//scanf("%s", a_password);
//	//printf("%s %s",password,a_password);
//	printf("请确认密码(Y/N):\n");
//	//清理缓冲区
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else if (ch == 'N')
//	{
//		printf("确认失败\n");
//	}
//	else
//	{
//		printf("输入内容是%c,不正确，请重新打开程序",ch);
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

//n的阶乘
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
//	printf("阶乘为%d", pro);
//	return 0;
//}

//计算1！+2！+...+n!
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
//	printf("阶乘相加%d", sum);
//	return 0;
//}

//二分查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
//	int k = 15;
//	int max = sizeof(arr) / sizeof(arr[0]);//计算数组大小
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
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
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
//		Sleep(500);//睡眠0.5s
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}

//int main()
//{
//	char password[20] = { 0 };
//	//假设密码为"asuna"
//	int i = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>\n");
//		scanf("%s", password);
//		if (strcmp(password, "asuna") == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			if(i<2)
//			{
//				printf("密码错误，您还有%d次输入密码机会\n", 2 - i);
//			}
//		}
//	}
//	if (i == 3)
//	{
//		printf("密码错误次数过多，退出程序\n");
//	}
//	return 0;
//}


//猜数字游戏
//1.随机生成一个1~100的数字
//2.我们来猜这个数字
// a. 如果猜大了，或者猜小了，要有提示，并继续猜
// b. 如果猜对了，那么恭喜玩家，游戏结束

#include <stdlib.h>//rand函数头文件
#include <time.h>//time函数头文件

void game()//猜数字游戏
{
	int guess = 0;
	int i = 1;
	int num = (rand()%100)+1;//模100，相当于限制范围0~99
	printf("请在1~100的范围内输入一个整数\n");
	while (num)
	{
		scanf("%d", &guess);
		if (guess > num)
		{
			printf("猜大了,已猜%d次\n",i++);
		}
		else if (guess < num)
		{
			printf("猜小了,已猜%d次\n", i++);
		}
		else
		{
			printf("恭喜你，猜对了,共猜了%d次\n", i);
			break;
		}
	}
}

void menu()//游戏菜单
{
	printf("************************\n");
	printf("****** 1.开始游戏 ******\n");
	printf("****** 0.退出游戏 ******\n");
	printf("************************\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();//打印一个游戏菜单
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}