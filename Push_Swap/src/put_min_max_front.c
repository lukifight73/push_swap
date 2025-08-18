/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_min_max_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:34:24 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:46:01 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_max_b_front(t_slist *ab)
{
	if (get_rang_max_b(ab) <= ab->nbb / 2)
	{
		while (get_rang_max_b(ab) != 0)
		{
			ft_rb(ab, 1);
		}
	}
	else
	{
		while (get_rang_max_b(ab) != 0)
			ft_rrb(ab, 1);
	}
	return ;
}

void	put_max_a_front(t_slist *ab)
{
	if (get_rang_max_a(ab) <= ab->nba / 2)
	{
		while (get_rang_max_a(ab) != 0)
		{
			ft_ra(ab, 1);
		}
	}
	else
	{
		while (get_rang_max_a(ab) != 0)
			ft_rra(ab, 1);
	}
	return ;
}

void	put_min_a_front(t_slist *ab)
{
	if (get_rang_min_a(ab) <= ab->nba / 2)
	{
		while (get_rang_min_a(ab) != 0)
		{
			ft_ra(ab, 1);
		}
	}
	else
	{
		while (get_rang_min_a(ab) != 0)
			ft_rra(ab, 1);
	}
	return ;
}
