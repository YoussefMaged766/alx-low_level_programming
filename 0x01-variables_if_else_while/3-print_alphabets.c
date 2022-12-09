#include <stdio.h>

/**
 * main- Entry point
 * @void: Null value
 *
 * Description: Print alphabet lowercase
 * Return: Zero value
 */
int main(void)
{
char upper, lower;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}
