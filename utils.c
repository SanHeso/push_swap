/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnewman <hnewman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:13:44 by hnewman           #+#    #+#             */
/*   Updated: 2021/06/18 19:56:08 by hnewman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pusw.h"

void	init_stack(t_all *all)
{
	all->size_a = 0;
	all->size_b = 0;
	all->stck_a = NULL;
	all->stck_b = NULL;
}

void	r_rrr(t_all *all)
{
	r_rra(all->stck_a, all->size_a);
	r_rrb(all->stck_b, all->size_b);
	write(1, "rrr\n", 4);
}

int	*rev_stack(int *arr, int size)
{
	int	*rev;
	int	i;
	int	j;

	i = 0;
	j = size;
	while (i < size)
	{
		rev[i] = arr[j];
		i++;
		j--;
	}
}