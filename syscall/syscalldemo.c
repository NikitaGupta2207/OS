#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *const *argv[])
{
	int fd;

	fd = open("desd.txt", O_WRONLY, O_CREAT);

	printf("fd = %d\n",fd);

	if(-1==fd)
	{
		perror("Error in open: \n");
		return -1;
	}

	write(fd, "cdac", 4);
	close(fd);
	return 0;
}
