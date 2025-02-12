/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:28:14 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:45:09 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_slist		*ab;
	char		**tab;

	if (ac < 2)
		return (0);
	if (ac > 2)
	{
		av++;
		ab = ft_lstnewab(av, 0);
	}
	else
	{
		tab = ft_split(av[1], ' ');
		ab = ft_lstnewab(tab, 0);
		liberator(tab);
	}
	if (!ab)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	ft_put_a_in_b(ab);
	liberator_ab(ab);
	return (0);
}
