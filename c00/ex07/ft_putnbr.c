/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:12:40 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/14 11:17:47 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		div;
	char	ch;

	if (nb < 0)
	{
		putchar('-');
		if (nb == -2147483648)
		{
			putchar('2');
			nb = 147483648;
		}
		else
			nb = -nb;
	}
	if (nb >= 10)
	{
		div = nb / 10 ;
		ft_putnbr(div);
	}
	ch = nb % 10 + '0';
	putchar(ch);
}
/*
int main()
{
	ft_putnbr(479997);
	return 0;
}*/
