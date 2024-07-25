/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wd.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 12:17:06 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/25 13:12:08 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ftmatch(char *str, char *str2)
{
	int i = 0;
	int j = 0;
	int match = 0;

	while(str[i])
	{
		while(str2[j])
		{
			if(str[i] == str2[j])
			{
				match++;
				break;
			}
			j++;
		}
		i++;
	}
	if( i == match)
	{
		while(*str)
		{
			write(1,str,1);
			str++;
		}
	}
}
int main(int ac, char **av)
{
	if (ac == 3)
		ftmatch(av[1], av[2]);
	write(1,"\n",1);
	return 0;
}
