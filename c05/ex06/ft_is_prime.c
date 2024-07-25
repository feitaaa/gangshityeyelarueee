/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 19:28:14 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/22 12:19:32 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	ft_is_prime(int nb)
{
	long	div;

	div = 3;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0)
		return (0);
	while (div * div <= nb)
	{
		if (nb % div == 0)
			return (0);
		div = div +2;
	}
	return (1);
}

int main()
{
	printf("%d \n", ft_is_prime(2147483647));
	return (0);
}
