#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
int main()
{
	int i = 0;
	char password[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "12345") == 0)
		{
			printf("��½�ɹ�\n");
			break;
		}
	}
	if (i == 3)
		printf("�����˳�����\n");
	return 0;
}
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int key = 7;
//	int mid = 0;
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//			break;
//	}
//	if (left <= right)
//		printf("�ҵ��ˣ��±���%d\n", mid);
//	else
//		printf("�Ҳ���\n");
//}
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±�Ϊ:%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 4; n++)
//	{
//		
//			ret = ret*n;
//		
//	}
//	sum = sum + ret;
//
//
//	printf("sum=%d\n", sum);
//	return 0;
//}
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret*i;
//		}
//	}
//		sum = sum + ret;
//		
//	
//	printf("sum=%d\n", sum);
//	return 0;
//}
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("ret=%d\n", ret);
//	return 0;
//}
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i < 10);
//	return 0;
//}
//{
//	for (;;)
//	{
//		printf("hehe\n");
//
//	}
//	return 0;
//}
//{
//	int i = 0;
//	for (i = 0; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d", i);
//	}
//	return 0;
//}
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	getchar();
//	printf("��ȷ�����루y/n):>");
//	ret = getchar();
//	if (ret == 'y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//}