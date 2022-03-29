#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: number of letters to be printed
 * Return: - 1 failed. 1 success)
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wr_stat = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	if (text_content == NULL)
		text_content = "";

	wr_stat = write(fd, text_content, len);

	if (wr_stat == -1 || wr_stat != len)
		return (-1);

	close(fd);

	return (1);
}
