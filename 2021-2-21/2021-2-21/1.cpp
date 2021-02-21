#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int ch = 0;
	while ((ch = getchar()) != EOF)
		putchar(ch);
	return 0;
}
//{
//	int i = 1;
//	
//		while (i <= 10)
//		{if (i == 5)
//			break;
//		printf("%d ", i);
//	i++;
//}
//		return 0;
//}
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;
//	case 2:
//		n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d\n", m,n);
//	return 0;
//}
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//							printf("weekday\n");
//							break;
//	case 6:
//	case 7:
//									printf("weekend");
//									break;
//	default:
//		printf("cuowu\n");
//		break;
//	}
//	return 0;
//}

//{
//	int i = 1;
//	while(i <= 100)
//	{
//		if (i%2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//{
//	int a = 1;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
//	int age = 10;
//	/*if (age < 18)
//		printf("未成年\n");
//	else
//		printf("成年\n");
//	return 0;*/
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	/*else if (age >=18 && age < 50);*/
//	else
//	{
//		printf("壮年\n");
//	}
//	return 0;
//}
