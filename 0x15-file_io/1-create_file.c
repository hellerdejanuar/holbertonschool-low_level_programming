#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @letters: number of letters to be printed
 */
int create_file(const char *filename, char *text_content)
{
	int fd, ch_cn = 0;
	ssize_t wr_stat = 0;
	char *buffer;

	if (*filename == '\0' || filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT, 0600);	
	if (fd == -1)
		return (-1);

	while (text_content[ch_cn] != '\0')
		ch_cn++;

	if (ch_cn == 0)
	{
		wr_stat = write(fd, "", 0);
		buffer = NULL;
	}
	else
	{
		buffer = malloc(sizeof(char) * ch_cn);
		if (buffer == NULL)
			return (-1);
		wr_stat = write(fd, buffer, ch_cn);
	}
	


	if (wr_stat == -1 || wr_stat != ch_cn)
		return (-1);

	close(fd);
	free(buffer);

	return (1);
}
