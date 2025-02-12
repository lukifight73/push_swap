/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min_max2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:00:29 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:44:49 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_rang_max_a(t_slist *ab)
{
	int	i;
	int	max;

	i = 0;
	max = get_max_a(ab);
	while (ab->a[i] != max)
		i++;
	return (i);
}

int	get_rang_max_b(t_slist *ab)
{
	int	i;
	int	max;

	i = 0;
	max = get_max_b(ab);
	while (ab->b[i] != max)
		i++;
	return (i);
}

int	get_rang_min_a(t_slist *ab)
{
	int	i;
	int	min;

	i = 0;
	min = get_min_a(ab);
	while (ab->a[i] != min)
		i++;
	return (i);
}

int	get_rang_min_b(t_slist *ab)
{
	int	i;
	int	min;

	i = 0;
	min = get_min_b(ab);
	while (ab->b[i] != min)
		i++;
	return (i);
}
