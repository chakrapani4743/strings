#include<stdio.h>
void main()
{
	char str[100] ,i = 0,count = 0;
	printf("Enter string : \n");
	scanf("%s",str);
	while (str[i++] != '\0')
		count ++;
	printf("The length of str is : %d\n",count);
}

