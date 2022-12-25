#define _CRT_SECURE_NO_WARNINGS 1
#define PI -3.14
#include <stdio.h>
#include <string.h>
//enum Sex 
//{
//	MALE,
//	FEMALE=2,
//	SECRET
//};
//int main()
//{
//	printf("PI=%f\n", PI);
//	const int age = 22;
//	//age = 21;
//	printf("age=%d\n", age);
//	enum Sex asuna = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	printf("asuna=%d", asuna);
//	return 0;
//}

//int main()
//{
//	"asuna";
//	char arr[] = "asuna";
//	printf("数组大小=%d", sizeof(arr));//因为char是1个字节，刚好结果为6
//	return 0;
//}


//int main()
//{
//	char arr1[] = "asuna";
//	char arr2[] = { 'a','s','u','n','a' };
//	char arr3[] = { 'a','s','u','n','a' ,'\0'};
//	//printf("arr1=%s\n", arr1);
//	//printf("arr2=%s\n", arr2);
//	//printf("arr3=%s\n", arr3);
//	printf("字符串长度=%d\n", strlen(arr1));
//	printf("字符串长度=%d\n", strlen(arr2));
//	printf("字符串长度=%d\n", strlen(arr3));
//	return 0;
//}

//int main()
//{
//	int len = strlen("asuna");
//	printf("字符串长度=%d", len);
//
//	return 0;
//}
//
//int main()
//{
//	printf("%c\a\n", '"');
//	printf("%c\a\n", '\'');
//	printf("%s\a\n", "'");
//	printf("%s\a\n", "\"");
//	printf("asuna");
//	return 0;
//}

//int main()
//{
//	printf("%c\n", '\327');
//	return 0;
//}

//int main()
//{
//	int input = 2;
//	printf("你喜欢asuna吗？\n1表示喜欢，0表示不喜欢\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("太对对了");
//	}
//	else if (input == 0)
//	{
//		printf("我的刀呢？");
//	}
//	else
//	{
//		printf("不能填其他结果哦！");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int day = 1;
//	while (day <= 9999)
//	{
//		printf("喜欢asuna的第%d天\n", day);
//		if (day == 9999)
//		{
//			printf("终成眷属");
//		}
//		day++;
//	}
//	
//	return 0;
//}

//float Avg(int x,int y)
//{
//	float sum = (float)x + (float)y;
//	float z = sum / 2;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("输入两个数\n将求平均值\n");
//	scanf("%d %d", &num1, &num2);
//	float output = Avg(num1, num2);
//	printf("这两个数的平均值为%f", output);
//	return 0;
//}

int main()
{
	int arr[5] = { 0 };
	printf("%d\n", sizeof(arr));
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组元素个数
	printf("%d\n", sz);
	return 0;
}