#include<stdio.h>
void main()
{
	char str[] = "chakri",ch,i = 0;
	printf("Please Enter character ");
	scanf("%c",&ch);
	while (str[i] != '\0')
	{
		if (str[i] == ch)
		{
			printf("%c  character is present in string ",ch);
			break;
		}
		i++;
	//	else{
	//		printf("%c is not found ",ch);
	//	continue;
	//	}
	}
	printf("%c is not found ",ch);
}

