/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 19:00:00 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/15 11:34:16 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	if (!str)
		return (0);
	while (str[x])
		x++;
	return (x);
}
/*
int main()
{
    printf("guette : %d",ft_strlen("NULL"));
}*/
