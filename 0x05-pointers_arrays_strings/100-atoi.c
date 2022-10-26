#include <main.h>

/**
 * _atoi - convert a string to an integer
 *@s: String
 * Return: Return the num
 */
int _atoi(char *s)
{
	unsigned int n = 0, i = 0;
	int sign = 1;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = n * 10 + (s[i] - '0');
			if (s[i + 1] > '9' || s[i + 1] < '0')
			{
				break;
			}
		}
		else if (s[i] == '-')
		{
			sign *= -1;
		}
	}
	return (n * sign);
}
