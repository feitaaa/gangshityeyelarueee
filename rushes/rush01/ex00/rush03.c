/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 09:58:36 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/06 15:32:29 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	f_print_line(int x, int start, int other, int end)
{
	int	column;

	column = 1;
	while (column <= x)
	{
		if (column == 1)
			ft_putchar(start);
		else if (column == x)
		{
			ft_putchar(end);
			ft_putchar('\n');
		}
		else
			ft_putchar(other);
		column++;
	}
}

void	rush(int x, int y)
{
	int	line;

	line = 1;
	if (x >= 0 && y >= 0)
	{
		while (line <= y)
		{
			if (line == 1 || line == y)
				f_print_line(x, 'A', 'B', 'C');
			else
				f_print_line(x, 'B', ' ', 'B');
			line++;
		}
	}
	else
		write(1, "The number must be superior than zero [KO]", 42);
}
