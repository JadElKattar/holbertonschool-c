#include <stdio.h>
/* Solving task 9 */

/**
 *main - print all the numbers of base 16 in lowercase
 *Return: 0 (Success)
 */
int main(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++);
	{
		putchar(nb + '0');
		if (nb != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
