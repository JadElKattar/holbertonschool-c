#include <stdio.h>

/* Solving task 8 */

/**
 *main- print all the numbers of base 16
 *Return: 0 (Success)
 */
int main(void)
{
	int n;
	char a;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (a = 'a'; a < 'g'; a++)
		putchar(a);
	putchar('\n');
	return (0);
}
