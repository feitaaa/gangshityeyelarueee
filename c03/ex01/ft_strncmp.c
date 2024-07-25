/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:17:59 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/11 17:18:36 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	x = 0;
	if (n == 0)
		return (0);
	while (x < n && s1[x] == s2[x] && s1[x] && s2[x])
		x++;
	if (n == x)
		return (0);
	return (s1[x] - s2[x]);
}
/*
int main(void)
{
	printf("oui = %d \n", ft_strncmp("dzdz","odz",2));
}*/
