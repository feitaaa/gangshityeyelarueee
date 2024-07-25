/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 19:54:29 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/14 11:18:04 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			putchar(a / 10 + '0');
			putchar(a % 10 + '0');
			write(1, " ", 1);
			putchar(b / 10 + '0');
			putchar(b % 10 + '0');
			if (a == 98 && b == 99)
				write(1, "\n", 1);
			else
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
/*
int main()
{
	ft_print_comb2();
	return 0;
}*/
