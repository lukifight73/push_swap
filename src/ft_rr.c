/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:28:43 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:44:29 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_slist *ab, int ra)
{
	int	c;

	if (ab->nba < 2)
		return ;
	c = ab->a[0];
	ft_transfer_a(ab, ab->nba - 1);
	ab->a[ab->nba - 1] = c;
	if (ra == 1)
	{
		ft_printf("ra\n");
		ab->nbo = ab->nbo + 1;
	}
}

void	ft_rb(t_slist *ab, int rb)
{
	int	c;

	if (ab->nbb < 2)
		return ;
	c = ab->b[0];
	ft_transfer_b(ab);
	ab->b[ab->nbb - 1] = c;
	if (rb == 1)
	{
		ft_printf("rb\n");
		ab->nbo = ab->nbo + 1;
	}
}

void	ft_rr(t_slist *ab, int rr)
{
	if ((ab->nbb < 2) && (ab->nba < 2))
		return ;
	ft_ra(ab, 0);
	ft_rb(ab, 0);
	if (rr == 1)
		ft_printf("rr\n");
	ab->nbo = ab->nbo + 1;
}
