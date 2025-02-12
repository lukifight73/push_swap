/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:28:14 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:44:16 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	verif(t_slist *ab)
{
	int	i;

	i = 0;
	if (ab->nbb > 0)
		return (0);
	while (i < ab->nba - 1)
	{
		if (ab->a[i] >= ab->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	exec_instructs(char **instructs, t_slist *ab)
{
	int	i;

	i = 0;
	while (instructs[i])
	{
		exec(instructs[i], ab);
		i++;
	}
	if (verif(ab) == 1)
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

void	central_command(t_slist *ab)
{
	char	*instructions;
	char	**instructs;

	instructions = get_standard_input();
	if (!instructions)
	{
		write(2, "Error\n", 6);
		return ;
	}
	instructs = ft_split(instructions, '\n');
	free(instructions);
	if (verif_instructs(instructs) == -1)
	{
		liberator(instructs);
		write(2, "Error\n", 6);
		return ;
	}
	exec_instructs(instructs, ab);
	liberator(instructs);
}

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
	central_command(ab);
	liberator_ab(ab);
	return (0);
}
