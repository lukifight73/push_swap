/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif_create_ab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:00:29 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:46:26 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verif_entry2(int *a, int nbv)
{
	int	i;
	int	j;

	i = 0;
	while (i < nbv)
	{
		j = i + 1;
		while (j < nbv)
		{
			if (a[i] == a[j])
				return (-1);
			j++;
		}
		i++;
	}
	return (1);
}

int	init_ab(t_slist *ab, int nbv)
{
	int	*a;
	int	*b;

	a = (int *)ft_calloc(nbv, sizeof(int));
	if (!a)
		return (-1);
	b = (int *)ft_calloc(nbv, sizeof(int));
	if (!b)
	{
		free(a);
		return (-1);
	}
	ab->a = a;
	ab->b = b;
	ab->nba = nbv;
	ab->nbb = 0;
	ab->nbo = 0;
	return (1);
}	

void	liberator_ab(t_slist *ab)
{
	free(ab->a);
	free(ab->b);
	free(ab);
}

t_slist	*ft_lstnewab(char **tab, int i)
{
	t_slist		*ab;
	int			nbv;

	nbv = verif_entry(tab);
	if (nbv == -1)
		return (NULL);
	ab = (t_slist *)malloc(sizeof(t_slist));
	if (!ab)
		return (NULL);
	if (init_ab(ab, nbv) == -1)
	{
		free(ab);
		return (NULL);
	}
	while (i < nbv)
	{
		ab->a[i] = ft_atoi(tab[i]);
		i++;
	}
	if (verif_entry2(ab->a, nbv) == -1)
	{
		liberator_ab(ab);
		return (NULL);
	}
	return (ab);
}

void	ft_printf_ab(t_slist *ab)
{
	int	i;

	i = 0;
	ft_printf("\n\na :");
	while (i < ab->nba)
	{
		ft_printf("%d ", ab->a[i]);
		i++;
	}
	i = 0;
	ft_printf("\nb :");
	while (i < ab->nbb)
	{
		ft_printf("%d ", ab->b[i]);
		i++;
	}
	ft_printf("\n\nNombre de nombres en a : %d", ab->nba);
	ft_printf("\nNombre d'operation : %d\n\n", ab->nbo);
}
