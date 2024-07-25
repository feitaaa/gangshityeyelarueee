/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:24:05 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/12 19:51:05 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_atoi(char *str)
{
	int	x;
	int	prt;
	int	ch;

	x = 0;
	ch = 0;
	prt = 0;
	while (str[x] == ' ' || str[x] == '\f' || str[x] == '\n'
		|| str[x] == '\r' || str[x] == '\t' || str[x] == '\v')
		x++;
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			prt++;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		ch *= 10;
		ch += str[x] - 48;
		x++;
	}
	if (!(prt % 2))
		return (ch);
	return (-ch);
}
/*	
int	main()
{
	char str[] = "  ---15122duwdh*";
	printf("%d",ft_atoi( str));
	return 0;
} */
