#include "main.h"

/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: content to be written in the file
 * Return: the 1 on success or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	if (!filename)
	{
		return (-1);
	}
	FILE *pf;
	pf = open(filename, O_WRONLY | O_CREAT, "u+rw");

	fprintf(pf, "%s", text_content ? text_content : "");
	return (1);
}
