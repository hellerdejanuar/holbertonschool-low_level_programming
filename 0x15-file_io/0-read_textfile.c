#include "main.h"
/**
 * read_textfile - reads text file and print to stdout
 * @filename: file path
 * @letters: number of letters to be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, cn;
	char *buffer = malloc(sizeof(char) * letters + 1);

	fd = open(filename, O_RDONLY);

	if (fd == -1 || filename == NULL || *filename == '\0' || buffer == NULL)
		return (0);

	read(fd, buffer, letters);
	buffer[letters] = '\0';

	close(fd);

	cn = write(STDOUT_FILENO, buffer, letters);

	return (cn);
}
