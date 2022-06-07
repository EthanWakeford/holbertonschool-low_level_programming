 char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int s = 1;

	while (dest[i] != '\0')
	{
	    i++;
	}
	dest[i] = src[0];
	i++;
	for (s = s; (s < n) && (src[s] != '\0'); s++)
	{
		dest[i] = src[s];
		i++;
	}
	return (dest);
 }
