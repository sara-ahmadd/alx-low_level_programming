#include "main.h"

/**
 * env_vars - return value of environment variable
 *@argv: list of input args

 * Return: value
 */

char *env_vars(char *argv[])
{
	char *x;

	x = getenv(argv[1]);
	return (x);
}
