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
	ssize_t read_cn = 0, write_cn = 0, r_stat;
	char buffer[1024];

	fd_src = open(argv[1], O_RDONLY);

	fd_trg = open(argv[2], O_WRONLY | O_CREAT | O_APPEND, 0600);
	
	if (fd_src == -1 || fd_trg == -1)
		return (-1); /* Open Failed */

	for (r_stat = 1024 ; r_stat == 1024 ; read_cn += r_stat)
	{	
		r_stat = read(fd_src, buffer, 1024);
		if (r_stat == -1)
			return (-1); /* Read failed */

		write_cn = write(fd_trg, buffer, r_stat);

		if (write_cn == -1)
			return (-1); /* write failed */
	}

	close(fd_src);
	close(fd_trg);

	return (1);
}
