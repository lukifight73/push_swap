/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:00:29 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:44:56 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max_a(t_slist *ab)
{
	int	i;
	int	max;

	i = 1;
	max = ab->a[0];
	if (ab->nba == 1)
		return (max);
	while (i < ab->nba)
	{
		if (ab->a[i] > max)
			max = ab->a[i];
		i++;
	}
	return (max);
}

int	get_max_b(t_slist *ab)
{
	int	i;
	int	max;

	i = 1;
	max = ab->b[0];
	if (ab->nbb == 1)
		return (max);
	while (i < ab->nbb)
	{
		if (ab->b[i] > max)
			max = ab->b[i];
		i++;
	}
	return (max);
}

int	get_min_a(t_slist *ab)
{
	int	i;
	int	min;

	i = 1;
	min = ab->a[0];
	if (ab->nba == 1)
		return (min);
	while (i < ab->nba)
	{
		if (ab->a[i] < min)
			min = ab->a[i];
		i++;
	}
	return (min);
}

int	get_min_b(t_slist *ab)
{
	int	i;
	int	min;

	i = 1;
	min = ab->b[0];
	if (ab->nbb == 1)
		return (min);
	while (i < ab->nbb)
	{
		if (ab->b[i] < min)
			min = ab->b[i];
		i++;
	}
	return (min);
}
