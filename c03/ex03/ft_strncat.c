/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:19:55 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/14 12:29:21 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	j;

	x = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[x] != '\0' && x < nb)
	{
		dest[j + x] = src[x];
		x++;
	}
	dest[j + x] = '\0';
	return (dest);
}
/*
int main(void)
{
	char dest[] = "udrh";
	char src[] = "orfjuj";
    

   ft_strncat(dest, src, 5);
	printf("%s", dest);
}*/
