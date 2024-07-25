/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 23:22:47 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/21 12:54:58 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	tab = malloc(sizeof(int) * (size));
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	return (tab);
}
/*
int main()
{
	int i;
	int *tab = ft_range(10,30);

	i = 0;
	while ( i < 50)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return 0;
}*/
