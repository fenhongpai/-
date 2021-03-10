#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char a = 3;
	char b = 127;
	char c = a + b;
	printf("%d\n", c);
	return 0;
}
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main()
//{
//	int a = 10;
//	struct stu s1 = { "zs", 20, "123" };
//	struct stu* ps = &s1;
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
	/*printf("%s\n", (*ps).name);
	printf("%d\n", (*ps).age);*/
	/*printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);*/
//	return 0;
//}
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//int main()
//{
//	int a[10] = { 0 };
//	a[4] = 10;
//	1 + 2;
//	return 0;
//}
//int a = 1;
//int b = 2;
//int c = (a > b, a = b + 10, a, b = a + 1);
//int main()
//{
//	printf("%d\n", c);
//}