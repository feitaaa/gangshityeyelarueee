/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:02:55 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/08 15:47:30 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'z')
			|| (str[x] >= 'A' && str[x] <= 'Z'))
			x++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
    printf("%d", ft_str_is_alpha("sd"));
}*/
