#include<stdio.h>
void main()
{
	char name[10];
	printf("Enter name :");
	//scanf("%s",name);
	//gets(name);
	fgets(name,5,stdin);
	printf("\n %s",name);
}
