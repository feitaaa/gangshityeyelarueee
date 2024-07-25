/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:20:52 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/11 11:21:09 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	j;

	x = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	while (src[x] != '\0' && x < size)
	{
		dest[j + x] = src[x];
		x++;
	}
	while (dest[j + x] == dest[x] && dest[x] != '\0')
		x++;
	return (dest[x]);
}
/*
int main()
{
    char dest[] = "ewaa";
    char src[] = "zbee";
    

    ft_strlcat(dest, src, 5);
    printf("look = %u", dest);

}*/
