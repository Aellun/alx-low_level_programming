#include <stdio.h>

/* Declare function called "first" and specify that its constructor function*/
void first(void) __attribute__ ((constructor));

/**
 * first - prints a sentence before the main
 * function is executed
 */
void first(void)
{
	/* Print the first sentence */
	printf("You're beat! and yet, you must allow,\n");
	/* Print the second sentence */
	printf("I bore my house upon my back!\n");
}

