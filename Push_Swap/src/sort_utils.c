/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:34:24 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:46:14 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_rang_b(t_slist *ab, int a)
{
	int	big;
	int	little;
	int	i;

	if (ab->nba < 3 && get_max_b(ab) < get_min_a(ab))
		return (-1);
	if (ab->nbb < 2)
		return (0);
	little = ab->b[0];
	big = ab->b[ab->nbb - 1];
	i = 0;
	if (a > get_max_b(ab) || a < get_min_b(ab))
		return (get_rang_max_b(ab));
	while ((a < little || a > big) && ab->nbb > 1)
	{
		little = ab->b[i + 1];
		big = ab->b[i];
		i++;
	}
	return (i);
}

int	get_rang_b_in_a(t_slist *ab)
{
	int	i;
	int	a;
	int	big;
	int	little;

	a = ab->b[0];
	big = ab->a[0];
	little = ab->a[ab->nba - 1];
	i = 0;
	if (a > get_max_a(ab) || a < get_min_a(ab))
		return (get_rang_max_a(ab) + 1);
	while ((a < little || a > big) && ab->nbb > 0)
	{
		big = ab->a[i + 1];
		little = ab->a[i];
		i++;
	}
	return (i);
}

int	ft_va(t_slist *ab, int j)
{
	int	i;

	i = 0;
	while (i < ab->nba - 1 - j)
	{
		if (ab->a[i] > ab->a[i + 1])
			return (i);
		i++;
	}
	return (-42);
}

void	rotate_a_to_welcome_big_ones(t_slist *ab)
{
	if (ab->nba - 1 - get_rang_max_a(ab) < get_rang_max_a(ab))
	{
		while (ab->a[ab->nba - 1] != get_max_a(ab))
			ft_rra(ab, 1);
	}
	else
	{
		while (ab->a[ab->nba - 1] != get_max_a(ab))
			ft_ra(ab, 1);
	}
}

void	finish_it(t_slist *ab)
{
	while (ab->nbb != 0)
	{
		if ((ab->b[0] < get_min_a(ab) || ab->b[0] > get_max_a(ab))
			&& ab->a[ab->nba - 1] != get_max_a(ab))
		{
			rotate_a_to_welcome_big_ones(ab);
			ft_pa(ab, 1);
		}
		else if ((ab->b[0] < ab->a[0] && ab->b[0] > ab->a[ab->nba - 1])
			|| (ab->b[0] < get_min_a(ab)
				&& ab->a[ab->nba - 1] == get_max_a(ab)))
			ft_pa(ab, 1);
		else if (ab->nba - get_rang_b_in_a(ab) > get_rang_b_in_a(ab))
			ft_ra(ab, 1);
		else
			ft_rra(ab, 1);
	}
	put_min_a_front(ab);
}
