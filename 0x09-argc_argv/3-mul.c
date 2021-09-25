#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main -  print program name
* @argc: arg counter
* @argv: array of command line
* Return: 0
**/
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc - 1 > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
