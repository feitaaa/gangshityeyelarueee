/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 13:08:27 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/21 13:31:16 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = size - 1;
	j = 0;
	while (i > j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i--;
		j++;
	}
}
/*
int main()
{
	int tab[]= {1,2,3,4};
	int size = 4;
	ft_rev_int_tab(tab, size);
	return 0;
}*/
