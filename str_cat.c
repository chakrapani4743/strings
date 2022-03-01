#include<stdio.h>
void main()
{
	char str1[100] = "Dennis",str2[100] = "ritche",str3[100],i = 0,j = 0;
	while(str1[i] != '\0')
	{
		str3[j++] = str1[i++];
	}
	i = 0;
	while (str2[i] != '\0')
	{
		str3[j++] = str2[i++];
	}
	str3[j++] = '\0';
	printf("The appended string is : %s\n",str3);
}


