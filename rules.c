/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnewman <hnewman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/10 16:36:45 by hnewman           #+#    #+#             */
/*   Updated: 2021/06/17 17:35:47 by hnewman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pusw.h"

void	r_sa(int *s_a, int size)
{
	int	tmp;

	if (s_a[size] && s_a[size - 1])
	{
		tmp = s_a[size];
		s_a[size] = s_a[size - 1];
		s_a[size - 1] = tmp;
	}
	write(1, "s_a\n", 3);
}

void	r_sb(int *s_b, int size)
{
	int	tmp;

	if (s_b[size] && s_b[size - 1])
	{
		tmp = s_b[size];
		s_b[size] = s_b[size - 1];
		s_b[size - 1] = tmp;
	}
	write(1, "s_b\n", 3);
}

void	r_ss(t_all *all)
{
	sa(all->stck_a, all->size_a);
	sb(all->stck_b, all->size_b);
	write(1, "ss\n", 3);
}

void	r_pb(t_all *all)
{
	if (all->size_a != 0)
		all->stck_b[all->size_b + 1] = all->stck_a[all->size_a];
	write(1, "pb\n", 3);
}

void	r_pa(t_all *all)
{
	if (all->size_b != 0)
		all->stck_a[all->size_a + 1] = all->stck_b[all->size_b];
	write(1, "pa\n", 3);
}
