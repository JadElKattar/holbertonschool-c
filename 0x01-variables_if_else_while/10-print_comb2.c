#include <stdio.h>
/* Solving Task 10 */

/**
 *main - print numbers from 00 to 99
 *Return: 0 (Success)
 */
int main(void)
{
	int nb;

	for (nb = 0; nb < 100; nb++)
	{
		putchar((nb / 10) + '0');
		putchar((nb % 10) + '0');
		if (nb != 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
