#include <unistd.h>
//int check()
//{
//	check si tout est carre sinon backtracking..
//}
//
void	gowrite(char *arg)
{
	int i;
	i = 0;
	if (!*arg)
		write(1,"\n", 1);
	while (arg[i] >= '1' || arg[i] <= '3')
	{
		if (arg[i] == '1')
			i++;
		if (arg[i] == '2')
			i++;
		if (arg[i] == '3')
			i++;
		write (1, &arg[i], 1);
	}

		arg[i + 1];

	while (arg[i] <= '4' || arg[i] >= '1')
	{	
		if (arg[i] == '3')
			i--;
		if (arg[i] == '2')
			i--;
		if (arg[i] == '1')
			i--;
		write(1,&arg[i],1);
	}

	write(1,"\n",1);
}
int main(int ac, char *av[])
{
	if (ac == 2)
		gowrite(av[2]);
	else
		write(1,"ERROR",5);
	return 0;
}

