#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	max = a > b ? a : b;
	printf("%d\n", max);
}
//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++&&++b&&d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(ch));
//	test1(arr);
//	test2(ch);
//}
//{
//	int a = (int)3.14;
//	return 0;
//}
//{
//	int a = 10;
//	printf("%d\n", a++);
//	printf("%d\n", ++a);
//}
//{
//	int a = 11;
//	a = a | (1 << 2);
//	printf("%d\n", a);
//	a = a&(~(1 << 2));
//	printf("%d\n", a);
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	printf("%d\n", s);
//}