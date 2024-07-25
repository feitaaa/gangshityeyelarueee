/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 11:45:41 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/15 10:39:33 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_iterative_factorial(int nb)
{
	int	x;

	x = nb;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (x > 1)
	{
		nb = nb * (x - 1);
		x--;
	}
	return (nb);
}

/*
int main()
{
	ft_iterative_factorial(4);
	return 0;
}*/
