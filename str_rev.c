#include<stdio.h>

int str_len(char str[])
{
	int j = 0,count = 0;
	while (str[j++] != '\0')
	 count ++;
	return count;
}

void main()
{
	char str[100] = "chakri",i = 0,count = 0;
	int len = str_len(str);
	for (i = len -1;i >= 0;i--)
		printf("%c",str[i]);
}
	


