#include "main.h"
/**
 * read_textfile - reads text file and print to stdout
 * @filename: file path
 * @letters: number of letters to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t cn, rd;
	char *buffer = malloc(sizeof(char) * letters);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	else if (*filename == '\0' || filename == NULL)
		return (0);
	else if (buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters);

	if (rd == -1)
		return (0);

	cn = write(STDOUT_FILENO, buffer, rd);

	if (cn == -1 || cn != rd)
		return (0);

	close(fd);
	free(buffer);

	return (cn);
}
