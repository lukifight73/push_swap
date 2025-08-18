/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nb_operations.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:28:37 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:45:02 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_nb_op1(t_slist *ab, int i, int rang_b)
{
	int	temp;
	int	nb_op;

	nb_op = i + rang_b + 1;
	if (rang_b + ab->nba - i > ab->nbb - 1)
		nb_op = ab->nba - i + 1;
	else if (rang_b + ab->nba - i <= ab->nbb - 1)
	{
		if (rang_b < ab->nbb - (ab->nba - i + rang_b))
			temp = rang_b;
		else
			temp = ab->nbb - (ab->nba - i + rang_b);
		nb_op = ab->nba - i + 1 + temp;
	}
	return (nb_op);
}

int	ft_get_nb_op2(t_slist *ab, int i, int rang_b)
{
	int	temp;
	int	nb_op;

	nb_op = i + rang_b + 1;
	if (rang_b - i < 0)
		nb_op = i + 1;
	else if (rang_b - i > 0)
	{
		if (ab->nbb - rang_b < rang_b - i)
			temp = ab->nbb - rang_b;
		else
			temp = rang_b - i;
		nb_op = i + 1 + temp;
	}
	return (nb_op);
}

int	ft_nombre_operations(t_slist *ab, int i, int rang_b)
{
	int	temp;
	int	nb_op;

	nb_op = i + rang_b + 1;
	temp = 0;
	if (ab->nba - i < i)
		nb_op = ft_get_nb_op1(ab, i, rang_b);
	else if (ab->nba - i >= i)
		nb_op = ft_get_nb_op2(ab, i, rang_b);
	return (nb_op);
}
