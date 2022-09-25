#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{

	for (int i=1; i<argc; i++)
	{
      		write(1, argv[i], strlen(argv[i]));
		write(1, " ", strlen(" "));  
	}
	write(1, "\n", strlen("\n"));

	return 0;
}
	
