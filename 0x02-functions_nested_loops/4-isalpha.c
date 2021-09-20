/**
 * _isalpha - is an alphabet
 * @c: the character to be tested
 *
 * Return: 1 (alphabet)
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (( c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
