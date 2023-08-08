#include "main.h"
#include <stdlib.h>

/**
 * create_file - entry function
 *
 * @filename: path to file
 * @text_content: text
 *
 * description: creates a file.
 *
 * Return: Integer
 */

int create_file(const char *filename, char *text_content)
{
int fd;
int w_bytes;

if (filename == NULL)
{
	return (-1);
}

fd = open(filename, O_WRONLY |O_TRUNC);
if (fd == -1)
{
	fd = creat(filename, S_IREAD | S_IWRITE);
	if (fd == -1)
	{
		return (-1);
	}
}

if (text_content)
{
	w_bytes = write(fd, text_content, sizeof(text_content) - 1);
}
else
{
	w_bytes = write(fd, '\0', 1);
}

if (w_bytes == -1)
{
	close(fd);
	return (-1);
}

close(fd);
return (1);
}
