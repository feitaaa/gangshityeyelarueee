/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:01:44 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/21 15:54:56 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
/*#include <stdio.h>*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(sizeof(int) * (size));
	if (tab == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		tab[i] = min;
		i++;
		min++;
	}
	*range = tab;
	return (size);
}
/*
int main()
{
	int *tab;
	int size;
	int i;
	size = ft_ultimate_range(&tab, 10, 30);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	return 0;
}*/
