#include <stdio.h>
/* Doing project 6 */

/**
 *main - single digit numbers using putchar
 *Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
