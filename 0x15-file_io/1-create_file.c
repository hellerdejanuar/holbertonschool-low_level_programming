#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @letters: number of letters to be printed
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t wr_stat = 0;

	if (*filename == '\0' || filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, + 0600);	
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
