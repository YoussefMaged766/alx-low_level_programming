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
	char b;

	for (b = 'z'; b <= 'a'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
