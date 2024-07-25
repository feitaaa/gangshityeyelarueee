/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 16:59:39 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/17 12:12:37 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb = nb * x;
		power--;
	}
	return (nb);
}
/*
int main()
{
	printf("%d", ft_iterative_power(5,2));
	return (0);
}*/
