/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @Ch: string
 *
 * Return: VOID
 */
char *string_toupper(char *Ch)
{
	int i = 0;

	while (*(Ch + i) != '\0')
	{
		if (*(Ch + i) >= 97 && *(Ch + i) <= 122)
		{
			*(Ch + i) = *(Ch + i) - 32;
		}
		i++;
	}
	return (Ch);
}
