#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdio.h>

# define ERR "Error! "
# define NO_ARG ERR "Less arguments\n"
# define NO_DIG ERR "Invalid argument (Please enter an integer value)\n"
# define NO_A ERR "Stack A is empty!"

typedef struct		s_all
{
	int				size_a;
	int				size_b;
	int				*stck_a;
	int				*stck_b;
}					t_all;

void				init_stack(t_all *all);
void				valid_arg(t_all *all, int argc, char **argv);
void				r_sa(int *s_a, int size);
void				r_sb(int *s_b, int size);
void				r_ss(t_all *all);
void				r_pb(t_all *all);
void				r_pa(t_all *all);
void				r_ra(int *s_a, int size);
void				r_rb(int *s_b, int size);
void				r_rr(t_all *all);
void				r_rra(int *s_a, int size);
void				r_rrb(int *s_b, int size);
void				r_rrr(t_all *all);

#endif