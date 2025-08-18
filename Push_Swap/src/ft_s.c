/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:28:14 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:44:42 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_slist *ab, int sa)
{
	int	c;

	if (ab->nba < 2)
		return ;
	c = ab->a[0];
	ab->a[0] = ab->a[1];
	ab->a[1] = c;
	if (sa == 1)
	{
		ft_printf("sa\n");
		ab->nbo = ab->nbo + 1;
	}
}

void	ft_sb(t_slist *ab, int sb)
{
	int	c;

	if (ab->nbb < 2)
		return ;
	c = ab->b[0];
	ab->b[0] = ab->b[1];
	ab->b[1] = c;
	if (sb == 1)
	{
		ft_printf("sb\n");
		ab->nbo = ab->nbo + 1;
	}
}

void	ft_ss(t_slist *ab, int ss)
{
	if ((ab->nbb < 2) && (ab->nba < 2))
		return ;
	ft_sa(ab, 0);
	ft_sb(ab, 0);
	if (ss == 1)
		ft_printf("ss\n");
	ab->nbo = ab->nbo + 1;
}
