/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnewman <hnewman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/17 17:32:56 by hnewman           #+#    #+#             */
/*   Updated: 2021/06/18 19:55:13 by hnewman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pusw.h"

void	r_ra(int *s_a, int size)
{
	int	tmp;
	int	i;

	i = size;
	if (!s_a[0])
	{
		tmp = s_a[i];
		while (i > 0)
		{
			s_a[i] = s_a[i - 1];
			i--;
		}
		s_a[i] = tmp;
	}
	write(1, "ra\n", 3);
}

void	r_rb(int *s_b, int size)
{
	int	tmp;
	int	i;

	i = size;
	if (!s_b[0])
	{
		tmp = s_b[i];
		while (i > 0)
		{
			s_b[i] = s_b[i - 1];
			i--;
		}
		s_b[i] = tmp;
	}
	write(1, "rb\n", 3);
}

void	r_rr(t_all *all)
{
	r_ra(all->stck_a, all->size_a);
	r_rb(all->stck_b, all->size_b);
	write(1, "rr\n", 3);
}

void	r_rra(int *s_a, int size)
{
	int	tmp;
	int i;

	i = 0;
	if (!s_a[0])
	{
		tmp = s_a[i];
		while (i < size)
		{
			s_a[i] = s_a[i + 1];
			i++;
		}
		s_a[i] = tmp;
	}
	write(1, "rra\n", 4);
}

void	r_rrb(int *s_b, int size)
{
	int	tmp;
	int i;

	i = 0;
	if (!s_b[0])
	{
		tmp = s_b[i];
		while (i < size)
		{
			s_b[i] = s_b[i + 1];
			i++;
		}
		s_b[i] = tmp;
	}
	write(1, "rrb\n", 4);
}