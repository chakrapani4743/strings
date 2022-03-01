#include<stdio.h>
void main()
{
	char str[100] = "Hello world",str1[100];
	int n;
	printf("Enter how many bytes are copied :");
	scanf("%d",&n);
	if (n <= 0)
	{
		printf("Enter valid input :");
	}
	else
	{
		for (int i = 0;i < n;i++)
		{
			str1[i] = str[i];
		}
		for (int i = 0;i < n;i++)
		{
			printf("%c",str1[i]);
		}
	}
}
