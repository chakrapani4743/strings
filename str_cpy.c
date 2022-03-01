#include<stdio.h>
void main()
{
	char str1[100] = "Chakri",str2[100],i = 0;
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	printf("The string copied from str1 to str2 is : %s\n",str2);
}
