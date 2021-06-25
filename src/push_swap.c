/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnewman <hnewman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 19:45:23 by hnewman           #+#    #+#             */
/*   Updated: 2021/06/25 20:02:51 by hnewman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/pusw.h"

int	main(int argc, char **argv)
{
	t_all	all;
	int		i;

	i = 1;
	init_stack(&all, argc);
	valid_arg(&all, argc, argv);
	while (all.stck_a[i])
	{
		printf("%d ", all.stck_a[i]);
		i++;
	}
	return (0);
}