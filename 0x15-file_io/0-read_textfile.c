#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - entry function
 *
 * @filename: path to file
 * @letters: how many letters be readed
 *
 * description: reads a text file and prints it to the stdout.
 *
 * Return: Length
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t count;
int f, w;
char *buff = (char *)malloc(letters);

if (buff == NULL)
{
	return (0);
}

if (filename == NULL)
{
	free(buff);
	return (0);
}

f = open(filename, O_RDONLY);

if (f < 0)
{
	return (0);
}

count = read(f, buff, letters);

if (count < 0)
{
	return (0);
}

w = write(1, (void *)buff, count);

if (w < 0)
{
	return (0);
}

close(f);
free(buff);

return (count);
}
