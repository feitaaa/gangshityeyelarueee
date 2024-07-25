/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 18:43:33 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/13 18:43:58 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(void)
{
	write (1, "abcdefghijklmnopqrstuvwxyz", 26);
}
/*
int	main()
{
	ft_print_alphabet();
	return 0;
}*/
