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

	fd = open(filename, O_RDWR);

	if (fd == -1 || *filename == '\0' || filename == NULL || buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters);

	if (rd == -1)
		return (0);

	close(fd);

	cn = write(STDOUT_FILENO, buffer, rd);
	free(buffer);

	if (cn == -1 || cn != rd)
		return (0);

	return (cn);
}
