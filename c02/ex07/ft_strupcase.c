/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 14:31:50 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/08 15:49:31 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] >= 'a' && str[x] <= 'z')
			str[x] = str[x] - 32;
		x++;
	}
	return (str);
}
/*int main()
{
    char str[] = "TAMEiuhfeiuhRE";

	printf("dest %s\n", ft_strupcase(str));

	return 0;
} */
