#include "lists.h"

void before_main()__attribute__((constructor));

/**
 * before_main - executed before the main function
 */
void before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
