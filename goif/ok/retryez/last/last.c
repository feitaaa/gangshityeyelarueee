#include <unistd.h>
void	last(char *str)
{
	int i;
	i = 0;
	while (str[i])
		i++;
	i = i-1;
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	while (i > 0)
	{
	   if (str[i] == ' ' || str[i] == '\t')
		   break;
		i--;
	}
	i = i +1;
	while(str[i] && str[i] != ' ' && str[i] != '\t')
	{
		write(1,&str[i],1);
		i++;
	}	
	write(1, "\n", 1);		
}

int main(int argc, char *argv[])
{
	if (argc == 2)
		last(argv[1]); 
	return 0;
}
