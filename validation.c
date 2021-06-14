/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnewman <hnewman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/11 18:19:34 by hnewman           #+#    #+#             */
/*   Updated: 2021/06/14 19:06:02 by hnewman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pusw.h"

int	valid_num(t_all *all, char **argv)
{
	int	i;
	int	j;

	i = -1;
	while (argv[++i])
	{
		j = -1;
		while (argv[i][++j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
		}
		all->stck_a[i] = argv[i];
	}
	return (1);
}

void	valid_arg(t_all *all, int argc, char **argv)
{
	if (argc < 2)
		error(NO_ARG);
	if (!valid_num(all, argv))
		error(NO_DIG);
}