/**
 * _puts - print a string followed by a new line
 * @str: The string to be outputed to stdout
 *
 * Return: void
 */
void _puts(char *str)
{
	int count = 0;

	while(str[count])
		_putchar(str[count]);
	_putchar('\n');
}
