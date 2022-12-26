#include <stdio.h>
//void test(void)
//{
//	printf("hehe");
//}
//int main()
//{
//	test(100);
//	return 0;
//}

//设计一个程序判断当前计算机的大小端
//int main()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	///*int a = 20;
//	//int b = -10;*/qiang'zhi
//	return 0;
//}

//整型提升
//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}

//指针数组
//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//	int*parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//指针数组

//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr1;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}

//二维数组下的指针数组的应用

//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print1(arr, 3, 5);
//	printf("- - - - -");
//	printf("\n");
//
//	print2(arr, 3, 5);
//	return 0;
//}

//函数指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*Add(a, b);*/
//	int(*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(7,8));
//	return 0;
//}

//void Print(char*ch)
//{
//	printf("%s\n", ch);
//}
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hahaha");
//	return 0;
//}

//函数指针数组
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int(*parr[2])(int, int) = { Add, Sub };
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d\n", (*parr[i])(3,2));
//	}
//	return 0;
//}
char*my_strcpy(char*dest, const char*scr)
{
	return 0;
}
int main()
{
	
	char*(*pf)(char*, const char*) = my_strcpy;
	char*(*pfarr[3])(char*, const char*);
	return 0;
}