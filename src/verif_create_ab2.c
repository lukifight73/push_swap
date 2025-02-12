/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_create_ab2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:00:29 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:46:20 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	liberator(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

int	verif_entry3(char **tab)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 0;
	count = 0;
	while (tab[i])
	{
		if (tab[i][j] == '\0')
			return (-1);
		while (tab[i][j])
		{
			if (tab[i][j] == ' ')
				count++;
			j++;
		}
		if (count == j)
			return (-1);
		j = 0;
		count = 0;
		i++;
	}
	return (i);
}

int	verif_entry(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			if (tab[i][j] == '-' && j == 0)
				j++;
			if (!tab[i][j] || tab[i][j] < '0' || tab[i][j] > '9')
				return (-1);
			j++;
		}
		if ((j == 11 && tab[i][0] != '-') || (j > 11)
			|| (j == 11 && ft_strncmp("-2147483648", tab[i], 11) == -1))
			return (-1);
		if ((j == 10 && ft_strncmp("2147483647", tab[i], 10) == -1))
			return (-1);
		i++;
	}
	if (verif_entry3(tab) == -1)
		return (-1);
	return (i);
}
