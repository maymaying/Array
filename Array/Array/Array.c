#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


/*
int main()
{
	//int a[10] = { 0 };
	//printf("size a=%d\n", sizeof(a));//40
	//printf("size a[0]=%d\n", sizeof(a[0]));//4

	//int arr[10] = { 0 };
	//int sz = sizeof(arr) / sizeof(arr[0]);
	//int i = 0;
	//for (i = 0; i<sz; i++)
	//{
	//	arr[i] = i;
	//}
	//for (i = 0; i<10; ++i)
	//{
	//	printf("%d ", arr[i]);
	//}

	//int arr[10] = { 0 };
	//int i = 0;
	//for (i = 0; i<sizeof(arr) / sizeof(arr[0]); ++i)
	//{
	//	printf("&arr[%d] = %p\n", i, &arr[i]);
	//}

	//int a;
	//int b;
	//int c;
	//int d;
	//printf("%p\n", &a);
	//printf("%p\n", &b);
	//printf("%p\n", &c);
	//printf("%p\n", &d);
	system("pause");
	return 0;
}
*/



/*
int main()
{
	int arr[3][4] = { 0 };
	int i = 0;
	for (i = 0; i<3; i++)
	{
		int j = 0;
		for (j = 0; j<4; j++)
		{
			arr[i][j] = i * 4 + j;
		}
	}
	//for (i = 0; i<3; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j<4; j++)
	//	{
	//		printf("%d ", arr[i][j]);
	//	}
	//}
	int *p = (int *)arr;
	for (i = 0; i < 3 * 4; i++)
	{
		printf("%d ", p[i]);//printf("%d ", *(p+i));
	}


	//int a[2][3];
	//int i = 0;
	//int j = 0;
	//for (; i < 2; i++)
	//{
	//	for (j = 0; j < 3; j++)
	//		printf("&a[%d][%d]=%p\n",i,j,&a[i][j]);
	//}


	system("pause");
	return 0;
}
*/



/*
//void test(int b[10])
//{
//	printf("2.sizeof(b)=%d\n", sizeof(b));//4
//}
//int main()
//{
//	int a[10];
//	printf("1.sizeof(a)=%d\n", sizeof(a));//40
//	test(a);
//	system("pause");
//	return 0;
//}

void test(int b[10][5])
{
	printf("2.sizeof(b)=%d\n", sizeof(b));//4
}
int main()
{
	int a[10][5];
	printf("1.sizeof(a)=%d\n", sizeof(a));//200
	test(a);
	system("pause");
	return 0;
}
*/