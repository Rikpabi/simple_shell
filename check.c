#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

void()
{
	int fd;

	char buffer[80];

	char msg[50] = "hello world"; /*strings in file*/

	fd = open("chk.txt", 0_RDWR | 0_CREAT); /*created with rdwr access*/

	printf("fd = %d", fd);   /*prints file descriptor*/

	if (fd != -1)
	{
		printf("\n chk.txt opened with read write access\n");

		write(fd, msg, sizeof(msg));   /*write to stdout*/

		lseek(fd, 0, SEEK_SET);

		read(fd, buffer, sizeof(msg));   /*reads from stdin*/

		printf("\n %s was written to my file\n", buffer);

		close(fd);
	}

	return (0);
}
