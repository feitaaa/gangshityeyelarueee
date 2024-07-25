/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rv.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:39:45 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/19 10:54:29 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char *ftrev(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	i = i - 1;
	while (i >= 0)
	{
		write(1,&str[i],1);
		i--;
	}
	return(str);
}
int main()
{
	ftrev("ouais");
	return 0;
}
