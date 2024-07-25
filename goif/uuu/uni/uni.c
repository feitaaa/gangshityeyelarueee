#include <unistd.h>

int check2(char c,char *str1)
{
	while (*str1)
	{
		if (*str1 == c)
			return 0;
		str1++;
	}
	return 1;
}

int check1(char c, char *str, int index)
{
	int i;

	i =0;
	while (i < index)
	{
		if(*str == c)
			return 0;
		i++;
	}
	return 1;
}


void	ftuni(char *str1, char *str2)
{
	int i;
	i = 0;
	while (str1[i])
	{
		if (check1(str1[i], str1, i))
		{
			write(1,&str1[i],1);
		}
		i++;
	}
	i = 0;
	while (str2[i])
	{
		if (check2(str2[i], str1))
		{	
			if (check1(str2[i] ,str2 ,i))
				write(1, &str2[i], 1);
		}
		i++;		
	}
}

int main(int ac, char **av)
{
	if (ac == 3)
		ftuni(av[1], av[2]);
	write(1,"\n",1);
	return 0;
}
