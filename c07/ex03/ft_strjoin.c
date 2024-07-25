/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 12:25:11 by mcastrat          #+#    #+#             */
/*   Updated: 2024/07/23 16:41:16 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	strle(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	concatall(char *concat, int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			concat[pos++] = strs[i][j++];
		if (i < size - 1)
		{
			j = 0;
			while (sep[j])
			{
				concat[pos++] = sep[j++];
			}
		}
		i++;
	}
	concat[pos] = '\0';
}

int	sizeall(int size, char **strs, char *sep)
{
	int	total;
	int	sepsize;
	int	i;

	i = 0;
	total = 0;
	sepsize = strle(sep);
	while (i < size)
	{
		total += strle(strs[i]);
		i++;
	}
	total += (sepsize * (size - 1));
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*concat;
	int		strsize;

	if (size == 0)
	{
		concat = malloc(1);
		*concat = size + '\0';
		return (concat);
	}
	strsize = sizeall(size, strs, sep);
	concat = malloc((sizeof(char) * strsize + 1));
	if (!concat)
		return (NULL);
	concatall(concat, size, strs, sep);
	return (concat);
}

int main()
{
	char *tout[] = {"smr", "jai", "la", "rage", "yee"};
	char *sep = "  hehe  ";
	int size = 5;
	printf("%s", ft_strjoin(size, tout, sep));
	return 0;
}
