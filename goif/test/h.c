/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   h.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:52:48 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/18 14:46:10 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void yee(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] < 'z') || (str[i] >= 'A' && str[i] < 'Z'))
				str[i] += 1;
		write(1,&str[i],1);
		i++;
	}
	write(1,"\n",1);
}
int main(int argc, char *argv[])
{
	if (argc == 2)
		yee(argv[1]);
	else
		write(1,"\n",1);
	return 0;
}
