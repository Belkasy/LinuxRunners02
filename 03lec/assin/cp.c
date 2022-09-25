#include<stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define MAX_READ_SIZE 100
int main (int argc, char **argv)
{
	if (argc != 3) {return -1;}
	
	char buf[MAX_READ_SIZE];
	int count; 

	int fd1 = open(argv[1],O_RDONLY);
	int fd2 = open(argv[2],O_RDWR|O_CREAT);

	while ((count = read (fd1, buf, MAX_READ_SIZE)) != 0)
	{
		write(fd2, buf, count);
	}
	close (fd1);
	close (fd2);
	return 0;
}

