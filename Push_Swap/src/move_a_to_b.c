/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_a_to_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:28:14 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:45:29 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_cas1(t_slist *ab, int i)
{
	while (get_rang_b(ab, ab->a[i]) != 0 && i <= ab->nba - 1)
	{
		ft_rrr(ab, 1);
		i++;
	}
	while (i <= ab->nba - 1)
	{
		ft_rra(ab, 1);
		i++;
	}
	if (i > ab->nba - 1)
		i = 0;
	while (get_rang_b(ab, ab->a[i]) != 0)
		ft_rrb(ab, 1);
}

void	ft_cas2(t_slist *ab, int i)
{
	while (get_rang_b(ab, ab->a[i]) != 0 && i > 0)
	{
		ft_rr(ab, 1);
		i--;
	}
	while (get_rang_b(ab, ab->a[i]) != 0)
		ft_rb(ab, 1);
	while (i > 0)
	{
		ft_ra(ab, 1);
		i--;
	}
}

void	ft_cas3(t_slist *ab, int i)
{
	while (get_rang_b(ab, ab->a[i]) != 0)
		ft_rb(ab, 1);
	while (i <= ab->nba - 1)
	{
		ft_rra(ab, 1);
		i++;
	}
}

void	ft_cas4(t_slist *ab, int i)
{
	while (i > 0)
	{
		ft_ra(ab, 1);
		i--;
	}
	while (get_rang_b(ab, ab->a[i]) != 0)
		ft_rrb(ab, 1);
}
