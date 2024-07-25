#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;

	i = size - 1;
	j = 0;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i--;
		j++;
	}

}
int main()
{
	int tab[] = {1, 2, 3};
	int size = 3;
	ft_rev_int_tab(tab, size);
	return 0;
}
