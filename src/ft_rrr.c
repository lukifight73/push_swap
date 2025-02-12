/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:10:23 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:44:35 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_table_a(t_slist *ab)
{
	int	i;
	int	c;

	i = 0;
	while (i < ab->nba / 2)
	{
		c = ab->a[i];
		ab->a[i] = ab->a[ab->nba - 1 - i];
		ab->a[ab->nba - 1 - i] = c;
		i++;
	}
}

void	reverse_table_b(t_slist *ab)
{
	int	i;
	int	c;

	i = 0;
	while (i < ab->nbb / 2)
	{
		c = ab->b[i];
		ab->b[i] = ab->b[ab->nbb - 1 - i];
		ab->b[ab->nbb - 1 - i] = c;
		i++;
	}
}

void	ft_rra(t_slist *ab, int rra)
{
	int	c;

	if (ab->nba < 2)
		return ;
	reverse_table_a(ab);
	c = ab->a[0];
	ft_transfer_a(ab, ab->nba - 1);
	ab->a[ab->nba - 1] = c;
	if (rra == 1)
	{
		ft_printf("rra\n");
		ab->nbo = ab->nbo + 1;
	}
	reverse_table_a(ab);
}

void	ft_rrb(t_slist *ab, int rrb)
{
	int	c;

	if (ab->nbb < 2)
		return ;
	reverse_table_b(ab);
	c = ab->b[0];
	ft_transfer_b(ab);
	ab->b[ab->nbb - 1] = c;
	if (rrb == 1)
	{
		ft_printf("rrb\n");
		ab->nbo = ab->nbo + 1;
	}
	reverse_table_b(ab);
}

void	ft_rrr(t_slist *ab, int rrr)
{
	if ((ab->nbb < 2) && (ab->nba < 2))
		return ;
	ft_rra(ab, 0);
	ft_rrb(ab, 0);
	if (rrr == 1)
		ft_printf("rrr\n");
	ab->nbo = ab->nbo + 1;
}
