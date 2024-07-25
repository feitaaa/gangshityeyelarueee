/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 11:20:21 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/16 12:51:41 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>*/

char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	o;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		o = 0;
		while (str[x + o] == to_find[o] && to_find[o] != '\0')
			o++;
		if (to_find[o] == '\0')
			return (&str[x]);
		x++;
	}
	return (0);
}
/*
int main()
{
    char str[] = "he ze zebi la";
    char to_find[] = "bi";
    char *res = ft_strstr(str, to_find);
    printf("guette : %s", res);
}*/
