#include <stdio.h>

char	*revprint( char *str)
{
	int i;
i = 0;
	while (str[i])
		i++;
	i = i -1;
	while (i >= 0)
	{
		printf("%c", str[i]);
		i--;
	}

	return str;
}
int main()
{
	char g[] = "salut";
	revprint(g);
	return 0;
}
