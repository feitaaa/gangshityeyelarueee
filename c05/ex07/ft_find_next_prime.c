/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 20:42:46 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/17 14:10:36 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_is_prime(int nb)
{
	long	div;

	div = 3;
	if (nb <= 1)
		return (0);
	if (nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (div * div <= nb)
	{
		if (nb % div == 0)
			return (0);
		div = div + 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
int main()
{
	printf("%d", ft_find_next_prime(8));
	return (0);
}*/
