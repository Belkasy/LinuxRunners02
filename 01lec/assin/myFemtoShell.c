#include <stdio.h>
#include <string.h>


int main ()
{
	char str[100];
	while(  ( strcmp(str,"exit") )  )
	{
		printf("Ans Gahz Ya basha > ");
		gets(str);
		printf("You said > %s\n",str);
	}
	printf("Good Bye ;)\n");
	return 0;
}
