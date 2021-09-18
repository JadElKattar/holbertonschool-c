#include <stdio.h>
/* Doing task 102 */

/**
 *main - print a combination
 *Return: 0 (Success)
 */
int main(void)
{
	int nb1;
	int nb2;
	
	for (nb1 = 0; nb1 <= 98; nb1++)
	{
		for (nb2 = nb1 + 1; nb2 <= 99; nb2++)
		{
			putchar(nb1 / 10 + '0');
			putchar(nb1 % 10 + '0');
			putchar(' ');
			putchar(nb2 / 10 + '0');
			putchar(nb2 % 10 + '0');

			if (nb1 != 98 || nb2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar ('\n');
	return (0);
}
