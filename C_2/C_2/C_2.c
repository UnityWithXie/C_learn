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
//	printf("�����С=%d", sizeof(arr));//��Ϊchar��1���ֽڣ��պý��Ϊ6
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
//	printf("�ַ�������=%d\n", strlen(arr1));
//	printf("�ַ�������=%d\n", strlen(arr2));
//	printf("�ַ�������=%d\n", strlen(arr3));
//	return 0;
//}

//int main()
//{
//	int len = strlen("asuna");
//	printf("�ַ�������=%d", len);
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
//	printf("��ϲ��asuna��\n1��ʾϲ����0��ʾ��ϲ��\n");
//	scanf("%d", &input);
//	if (input == 1)
//	{
//		printf("̫�Զ���");
//	}
//	else if (input == 0)
//	{
//		printf("�ҵĵ��أ�");
//	}
//	else
//	{
//		printf("�������������Ŷ��");
//	}
//	
//	return 0;
//}

//int main()
//{
//	int day = 1;
//	while (day <= 9999)
//	{
//		printf("ϲ��asuna�ĵ�%d��\n", day);
//		if (day == 9999)
//		{
//			printf("�ճɾ���");
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
//	printf("����������\n����ƽ��ֵ\n");
//	scanf("%d %d", &num1, &num2);
//	float output = Avg(num1, num2);
//	printf("����������ƽ��ֵΪ%f", output);
//	return 0;
//}

int main()
{
	int arr[5] = { 0 };
	printf("%d\n", sizeof(arr));
	int sz = sizeof(arr) / sizeof(arr[0]);//��������Ԫ�ظ���
	printf("%d\n", sz);
	return 0;
}