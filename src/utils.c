/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnewman <hnewman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:13:44 by hnewman           #+#    #+#             */
/*   Updated: 2021/06/25 20:01:47 by hnewman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pusw.h"

void	init_stack(t_all *all, int argc)
{
	all->size_a = argc;
	all->size_b = 0;
	all->stck_a = (int *)malloc(sizeof(int *) * all->size_a);
	if (!all->stck_a)
		error(NO_MAL);
	all->stck_b = NULL;
}

void	r_rrr(t_all *all)
{
	r_rra(all->stck_a, all->size_a);
	r_rrb(all->stck_b, all->size_b);
	write(1, "rrr\n", 4);
}

int	*rev_stack(char **arg, int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (arg[++i])
		arr[i] = ft_atoi(arg[i]);
	i = 0;
	while (i <= size / 2)
	{
		j = arr[i];
		arr[i] = arr[size - i];
		arr[size - i] = j;
		i++;
	}
	return (arr);
}
