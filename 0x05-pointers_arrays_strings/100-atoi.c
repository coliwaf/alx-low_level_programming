#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string param
 * Return: int value of string converted
 */
int _atoi(char *s)
{
	int i;
	int result = 0;
	int sign = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			result = (result * 10) + (s[i] - '0');
		}
		else if (result > 0)
			break;
	}
	return (result * sign);
}
