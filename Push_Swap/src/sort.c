/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 18:34:24 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:46:08 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_bouge_qui(t_slist *ab)
{
	int	rang_b;
	int	i;
	int	nb_operations;
	int	j;
	int	nb_temp;

	i = 0;
	nb_operations = 2147483647;
	while (i < ab->nba)
	{
		rang_b = get_rang_b(ab, ab->a[i]);
		nb_temp = ft_nombre_operations(ab, i, rang_b);
		if (nb_temp < nb_operations)
		{
			j = i;
			nb_operations = nb_temp;
		}
		i++;
	}
	return (j);
}

int	ft_quel_cas(t_slist *ab, int i, int rang_b)
{
	if (ab->nba - i < i && rang_b + ab->nba - i >= ab->nbb)
		return (1);
	else if (ab->nba - i < i && ab->nbb - rang_b + ab->nba - i < rang_b)
	{
		if (ab->nbb - (rang_b + ab->nba - i) < rang_b)
			return (1);
		return (3);
	}
	else if (ab->nba - i >= i && rang_b - i <= 0)
		return (2);
	else if (ab->nba - i >= i && rang_b - i > 0)
	{
		if (rang_b - i < ab->nbb - rang_b)
			return (2);
		return (4);
	}
	else if (ab->nba - i < i && ab->nbb - rang_b + i > rang_b)
		return (3);
	return (0);
}

void	ft_je_te_bouge_mon_salaud(t_slist *ab, int i, int rang_b)
{
	int	cas;

	cas = ft_quel_cas(ab, i, rang_b);
	if (cas == 1)
		ft_cas1(ab, i);
	else if (cas == 2)
		ft_cas2(ab, i);
	else if (cas == 3)
		ft_cas3(ab, i);
	else if (cas == 4)
		ft_cas4(ab, i);
	ft_pb(ab, 1);
}

void	sort_last_a(t_slist *ab)
{
	if (get_rang_max_a(ab) == 2 && ab->a[0] > ab->a[1])
		ft_sa(ab, 1);
	else if (get_rang_max_a(ab) == 1 && ab->a[0] < ab->a[2])
	{
		ft_rra(ab, 1);
		ft_sa(ab, 1);
	}
	else if (get_rang_max_a(ab) == 0 && ab->a[1] > ab->a[2])
	{
		ft_ra(ab, 1);
		ft_sa(ab, 1);
	}
}

void	ft_put_a_in_b(t_slist *ab)
{
	int	indice;
	int	i;

	i = 0;
	if (ft_va(ab, 0) == -42 && ab->nbb == 0)
		return ;
	while (ab->nba > 3 && i < 2)
	{
		ft_pb(ab, 1);
		i++;
	}
	while (ab->nba > 3)
	{
		indice = ft_bouge_qui(ab);
		ft_je_te_bouge_mon_salaud(ab, indice, get_rang_b(ab, ab->a[indice]));
	}
	sort_last_a(ab);
	finish_it(ab);
}
