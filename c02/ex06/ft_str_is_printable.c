/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:18:36 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/08 12:04:56 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 32 && str[x] <= 126)
			x++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
    printf("%d", ft_str_is_printable(",fpofmuf,w."));
}*/
