#include <stdio.h>

void before_main(void) __attribute__((constructor));

/**
 * before_main - prints before the main function is executed.
 */

void before_main(void)
{
	char *s = "You're beat! and yet, you must allow,";
	char *s1 = "I bore my house upon my back!";

	printf("%s\n%s\n", s, s1);
}
