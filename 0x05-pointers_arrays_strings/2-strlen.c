/**
 * _strlen - returns the length of a string
 * @s: The string to be checked
 * 
 * Return: The length of the string provided
 */
int _strlen(char *s)
{
	count = 0;

	while (s[count])
		count++;
	return(count);
}
