/**
*_strcat - concatnate two strings
*@dest: 1st string
*@src: 2nd string
*/
char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0;
	char *ptr;
	
	while(dest[len1]!='\0')
	{
		len1++;
	}

	while(src[len2]!='\0')
	{
		dest[len1++] = src[len2++];
	}
	
	dest[len1] = '\0';
	ptr = dest;
	
	return *ptr;
}
