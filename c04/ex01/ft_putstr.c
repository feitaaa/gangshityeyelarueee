/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 15:04:04 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/11 17:08:45 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char *str)
{
	if (!str)
		return ;
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
int main()
{
    ft_putstr(NULL);
    return 0;
}*/
