/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:26:57 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/11 17:36:11 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;

	div = *a;
	*a = div / *b;
	*b = div % *b;
}
/*
int main(void)
{	
	int c;
	int d;

	c  = 5;
	d  = 3;

	ft_ultimate_div_mod(&c, &d);

	printf(" %d | %d \n", c, d);
	return 0;
}*/
