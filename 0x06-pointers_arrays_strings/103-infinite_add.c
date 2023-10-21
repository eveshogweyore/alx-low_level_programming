#include "main.h"

/**
 * infinite_add - adds to numbers in string format
 * @n1: The first number
 * @n2: The second number
 * @r: The result of the addition
 * @size_r: The size of the memory address to store the result
 *
 * Return: On Success (r) and On Failure (0)
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_len = 0, n2_len = 0, bg_len, num1, num2, temp_num, add = 0;

	while (n1[n1_len] != '\0')
		n1_len++;
	while (n2[n2_len] != '\0')
		n2_len++;
	if (n1_len >= n2_len)
		bg_len = n1_len;
	else
		bg_len = n2_len;
	if (size_r <= bg_len + 1)
		return (0);
	r[bg_len + 1] = '\0';
	n1_len--, n2_len--, size_r--;
	num1 = n1[n1_len] - 48, num2 = n2[n2_len] - 48;
	while (bg_len >= 0)
	{
		temp_num = num1 + num2 + add;
		if (temp_num >= 10)
			add = temp_num / 10;
		else
			add = 0;
		if (temp_num > 0)
			r[bg_len] = (temp_num % 10) + 48;
		else
			r[bg_len] = '0';
		if (n1_len > 0)
			n1_len--, num1 = n1[n1_len] - 48;
		else
			num1 = 0;
		if (n2_len > 0)
			n2_len--, num2 = n2[n2_len] - 48;
		else
			num2 = 0;
		bg_len--, size_r--;
	}
	if (r[0] == '0')
		return (r + 1);
	else
		return (r);
}
