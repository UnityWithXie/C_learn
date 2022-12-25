#define _CRT_SECURE_NO_WARNINGS 1
char g_arr[] = "asuna";
//static修饰函数，外部源文件不可链接
static int Add(int x, int y)
{
	return x + y;
}