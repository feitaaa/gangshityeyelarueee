/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:19:24 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/13 14:54:09 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strcat(char *dest, char *src)
{
	int	x;
	int	j;

	x = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[x] != '\0')
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
	char src[] = "orbrfvnroivrinvirvirff";

	ft_strcat(dest, src);
	printf("yea %s", dest);

	
}*/
