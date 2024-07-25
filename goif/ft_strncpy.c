char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int x;

	x =0;

	while (src[x] && n > x)
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return dest
}
