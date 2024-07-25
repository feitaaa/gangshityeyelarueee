/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 17:30:12 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/25 10:55:42 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_stock_str.h"

void	putchar(char c)
{
	write(1, &c, 1);
}

void	putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	putnbr(int nb)
{
	int		div;
	char	ch;

	if (nb < 0)
	{
		putchar('-');
		if (nb == -2147483648)
		{
			putchar ('2');
			nb = 147483648;
		}
		else
			nb = -nb;
	}
	if (nb >= 10)
	{
		div = nb / 10;
		putnbr(div);
	}
	ch = nb % 10 + '0';
	putchar(ch);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		putstr(par[i].str);
		putchar('\n');
		putnbr(par[i].size);
		pucthar('\n');
		putstr(par[i].copy);
		putchar('\n');
		i++;
	}
}
