#include "main.h"
/**
*_strncat - concatnate two strings by most n bytes
*@dest: 1st string
*@src: 2nd string
*@n:max bytes
*Return: value
*/
char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}

	while (src[len2] != '\0')
	{
		if (len2 == n)
			break;
		dest[len1++] = src[len2++];
	}

	dest[len1] = '\0';

	return (dest);
}
