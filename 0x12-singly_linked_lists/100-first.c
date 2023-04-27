#include "lists.h"

void before_main(void)__attribute__((constructor));

/**
 * before_main - executed before the main function
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nIbore my house upon my
			back!\n");
}
