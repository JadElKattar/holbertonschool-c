#include <stdio.h>
/* Doing project 7 */

/**
 *main- Reverse Alphabets
 *Return: 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
