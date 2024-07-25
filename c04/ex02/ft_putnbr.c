/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:31:19 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/24 15:24:29 by mcastrat         ###   ########.fr       */
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
		div = nb / 10;
		ft_putnbr (div);
	}
	ch = nb % 10 + '0';
	putchar(ch);
}
/*
int main()
{
  ft_putnbr(-448);
  return 0;
}*/
