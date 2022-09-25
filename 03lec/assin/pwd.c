#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


#define MAX_SIZE 100

int main(int argc, char **argv)
{
	if (argc != 1){return -1;}
	
	char buf[MAX_SIZE];

	getcwd(buf,MAX_SIZE);

	write(1, buf, strlen(buf));
	printf("\n");

	return 0;
}
	
