#include "holberton.h"
/**
 * _abs - prints the absolute value of any number inserted
 * @i: number value
 * 
 * Return: @i positive
 *
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	}
	else if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i);
	}
}
