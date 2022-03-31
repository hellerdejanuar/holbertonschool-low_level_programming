#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: number of letters to be printed
 * Return: - 1 failed. 1 success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int fd_src, fd_trg;
	ssize_t read_cn = 0, write_cn = 0;
	char buffer[1024];

	fd_src = open(argv[1], O_RDONLY);

	if (fd_src == -1)
		return (-1); /* Open Failed */

	read_cn = read(fd_src, buffer, 1024);

	if (read_cn == -1)
			return (-1); /* Read failed */

	close(fd_src);
	
	fd_trg = open(argv[2], O_WRONLY | O_CREAT, 0600);

	write_cn = write(fd_trg, buffer, read_cn);

	if (write_cn != read_cn)
		return (-1);

	close(fd_trg);

	return (1);
}
