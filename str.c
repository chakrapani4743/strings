#include<stdio.h>
void main()
{
	char str[] = "chakri";
	int n =sizeof(str) / sizeof(str[0]);
	char str[100] = "chakri";
       char str[] = {'w','o','r','l','d','\0'};	

	printf("%s",str);
	//puts(str);
	//gets(str);
}
