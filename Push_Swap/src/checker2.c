/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbenatar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 15:28:14 by lbenatar          #+#    #+#             */
/*   Updated: 2024/12/03 14:44:10 by lbenatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	join2(char *s1, char *s2, char *conc)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (s1[i])
	{
		conc[i] = s1[i];
		i++;
	}
	while (s2[t])
	{
		conc[i + t] = s2[t];
		t++;
	}
	free(s1);
}

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*conc;
	int		t;
	int		i;

	i = 0;
	t = 0;
	while (s1[i])
		i++;
	while (s2[t])
		t++;
	conc = (char *)malloc((t + i + 1) * sizeof(char));
	if (!conc)
		return (NULL);
	conc[t + i] = '\0';
	join2(s1, s2, conc);
	return (conc);
}

char	*get_standard_input(void)
{
	char	*buf;
	char	*instructions;

	buf = (char *)malloc(2 * sizeof(char));
	if (!buf)
		return (NULL);
	buf[1] = '\0';
	instructions = (char *)malloc(1 * sizeof(char));
	if (!instructions)
		return (NULL);
	instructions[0] = '\0';
	while (read(1, buf, 1) != 0)
		instructions = ft_strjoin2(instructions, buf);
	free(buf);
	return (instructions);
}

int	verif_instructs(char **instructs)
{
	int	i;
	int	res;

	i = 0;
	while (instructs[i])
	{
		if ((ft_strncmp("sa", instructs[i], 3) == 0)
			|| (ft_strncmp("sb", instructs[i], 3) == 0)
			|| (ft_strncmp("ss", instructs[i], 3) == 0)
			|| (ft_strncmp("pa", instructs[i], 3) == 0)
			|| (ft_strncmp("pb", instructs[i], 3) == 0)
			|| (ft_strncmp("ra", instructs[i], 3) == 0)
			|| (ft_strncmp("rb", instructs[i], 3) == 0)
			|| (ft_strncmp("rr", instructs[i], 3) == 0)
			|| (ft_strncmp("rra", instructs[i], 4) == 0)
			|| (ft_strncmp("rrb", instructs[i], 4) == 0)
			|| (ft_strncmp("rrr", instructs[i], 4) == 0))
			res = 1;
		else
			return (-1);
		i++;
	}
	return (res);
}

void	exec(char *instructs, t_slist *ab)
{
	if (!ft_strncmp("rra", instructs, 3))
		ft_rra(ab, 0);
	else if (!ft_strncmp("rrb", instructs, 3))
		ft_rrb(ab, 0);
	else if (!ft_strncmp("rrr", instructs, 3))
		ft_rrr(ab, 0);
	else if (!ft_strncmp("ra", instructs, 2))
		ft_ra(ab, 0);
	else if (!ft_strncmp("rb", instructs, 2))
		ft_rb(ab, 0);
	else if (!ft_strncmp("rr", instructs, 2))
		ft_rr(ab, 0);
	else if (!ft_strncmp("sa", instructs, 2))
		ft_sa(ab, 0);
	else if (!ft_strncmp("sb", instructs, 2))
		ft_sb(ab, 0);
	else if (!ft_strncmp("ss", instructs, 2))
		ft_ss(ab, 0);
	else if (!ft_strncmp("pa", instructs, 2))
		ft_pa(ab, 0);
	else if (!ft_strncmp("pb", instructs, 2))
		ft_pb(ab, 0);
}
