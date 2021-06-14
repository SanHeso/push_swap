#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>

# define ERR "Error! "
# define NO_ARG ERR "Less arguments\n"
# define NO_DIG ERR "Invalid argument (Please enter an integer value)\n"

typedef struct		s_all
{
	int				*stck_a;
	int				*stck_b;
}					t_all;

int					atoi_mod(char *str);

#endif