/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:18:35 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/14 17:12:58 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	if (!s1 || !s2)
		return (0);
	while (s1[x] && s2[x] && s1[x] == s2[x])
		x++;
	return (s1[x] - s2[x]);
}
/*
	int main()
{	
	printf("oui : %d \n", ft_strcmp("hellop", "hello"));
	return 0;
}*/
