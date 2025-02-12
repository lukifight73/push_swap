/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:28:37 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:44:22 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_transfer_a(t_slist *ab, int nb)
{
	int	i;

	i = 0;
	while (i < nb && i < ab->nba + ab->nbb)
	{
		ab->a[i] = ab->a[i + 1];
		i++;
	}
}

void	ft_transfer_b(t_slist *ab)
{
	int	i;

	i = 0;
	while (i < ab->nbb && i < ab->nba + ab->nbb)
	{
		ab->b[i] = ab->b[i + 1];
		i++;
	}
}

void	ft_pa(t_slist *ab, int pa)
{
	int	i;
	int	c;
	int	d;

	i = 1;
	if (ab->nbb < 1)
		return ;
	c = ab->a[0];
	while (i <= ab->nba)
	{
		d = ab->a[i];
		ab->a[i] = c;
		c = d;
		i++;
	}
	ab->a[0] = ab->b[0];
	ab->nba++;
	ab->nbb--;
	ft_transfer_b(ab);
	if (pa == 1)
		ft_printf("pa\n");
	ab->nbo = ab->nbo + 1;
}

void	ft_pb(t_slist *ab, int pb)
{
	int	i;
	int	c;
	int	d;

	i = 1;
	if (ab->nba < 1)
		return ;
	c = ab->b[0];
	while (i <= ab->nbb)
	{
		d = ab->b[i];
		ab->b[i] = c;
		c = d;
		i++;
	}
	ab->b[0] = ab->a[0];
	ab->nbb++;
	ab->nba--;
	ft_transfer_a(ab, ab->nba);
	if (pb == 1)
		ft_printf("pb\n");
	ab->nbo++;
}
