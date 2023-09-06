#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: number of letters read & printed or 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file, w, t;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return 0;
	buf = malloc(sizeof(char) * letters);
	t = read(file, buf, letters);
	w = write(STDOUT_FILENO, buf, t);
	free(buf);
	close(file);
	return(w);
}
