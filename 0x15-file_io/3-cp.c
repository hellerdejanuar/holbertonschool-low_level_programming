#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: number of letters to be printed
 * Return: - 1 failed. 1 success)
 */
int main(int argc, char *argv[])
{
	int fd_src, fd_trg, len = 0;
	ssize_t wr_stat = 0;
	char buffer[1024];

	fd_src = open(argv[1], O_RDONLY);

	if (fd_src == -1)
		return (-1); /* Open Failed */

	read_cn = read(fd_src, buffer, 1024);

	if (rd == -1)
		return (ERROR); /* Read failed */

	close(fd_src)
	write_cn = write(fd_trg, buffer, read_cn)

	if (wr_stat != len)
		return (-1);

	close(fd);

	return (1);
}
