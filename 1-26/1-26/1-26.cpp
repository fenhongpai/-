#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
////{
//	int a = 4;
//	printf("%p\n", &a);
//	return 0;
//}
struct stu
{
	char name[20];
	int age;
	char sex[5];
	char id[15];
};
struct stu s = { "ÕÅÈý", 20, "ÄÐ", "20181010" };
printf("name=%s age=%d sex=%s id=%s\n", s.name, s.age, s.sex, s.id);
struct stu* ps = &s;
printf("name=%s age=%d sex=%s id=%s\n", ps->name, ps->age, ps->sex, ps->id);