/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revstring.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:56:16 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/24 22:16:17 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ftrr(char *str)
{
	int i;
	int j;
	int temp;

	j = 0;
	i = 0;
	temp = 0;
	while (str[i])
		i++;
	i = i - 1;
	while(i > j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i--;
		j++;
	}
	return (str);
}
int main()
{
	char str[] = "salutitit";
	printf("%s", ftrr(str));
	return 0;
}
