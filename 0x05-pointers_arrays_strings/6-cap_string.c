/**
 * cap_string - capitalizes everything! :P
 * @Ch: string
 *
 * Return: string
 */
char *cap_string(char *Ch)
{
	int i;

	for (i = 0; Ch[i] != '\0'; i++)
	{

		if (i == 0)
		{
			if ((Ch[i] >= 'a' && Ch[i] <= 'z'))
				Ch[i] = Ch[i] - 32;
			continue;
		}
		if (Ch[i] == ' ' || Ch[i] == '\n' || Ch[i] == '\t'
		    || Ch[i] == ',' || Ch[i] == ';' ||  Ch[i] == '.'
		    || Ch[i] == '!' || Ch[i] == '?' || Ch[i] == '"'
		    || Ch[i] == '(' || Ch[i] == ')'
		    || Ch[i] == '{' || Ch[i] == '}')
		{

			if (Ch[i + 1] >= 'a' && Ch[i + 1] <= 'z')
			{
				Ch[i + 1] = Ch[i + 1] - 32;
				continue;
			}
		}
	}
	return (Ch);

}
