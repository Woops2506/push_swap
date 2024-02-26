#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include "./my_libs/libft/libft.h"
# include "./my_libs/get_next_line/get_next_line.h"
# include "./my_libs/ft_printf/ft_printf.h"

typedef struct s_push_swap {
	char	**arguments;
	int		*pile_a;
	int		*pile_b;
	int		*tmp;
	int		int_a;
	int		int_b;
	int		min;
	int		i;
	int		j;
	int		counter;
	int		small_i;
	int		big_i;
}	t_push_swap;

/* main.c */
void	two_args_init(t_push_swap *ps, char **argv);
void	multi_args_init(t_push_swap *ps, int argc, char **argv);

/* operations1/2/3.c */
void	swap_a(t_push_swap *s);
void	swap_b(t_push_swap *s);
void	swap_a_b(t_push_swap *s);
void	push_a(t_push_swap *s);
void	push_b(t_push_swap *s);
void	rotate_a(t_push_swap *s);
void	rotate_b(t_push_swap *s);
void	rotate_a_b(t_push_swap *s);
void	reverse_rotate_a(t_push_swap *s);
void	reverse_rotate_b(t_push_swap *s);
void	reverse_rotate_a_b(t_push_swap *s);

/* algos1/2.c */
void	algorithms(t_push_swap *s);
void	two_args_alg(t_push_swap *s);
void	three_int_alg(t_push_swap *s);
void	four_int_alg(t_push_swap *s);
void	five_int_alg(t_push_swap *s);
void	big_algorithm(t_push_swap *s);

/* algo_utils.c */
void	three_alg_help(t_push_swap *s);
void	push_up(t_push_swap *s);
void	find_smallest(t_push_swap *s);

/* checks.c */
void	check_non_num(char *str);
void	check_doubles(int *tab, int len);
void	check_max_min(char *str);
int		check_order(t_push_swap *s);

/* helpers.c */
void	create_stacks(t_push_swap *ps);
void	init_stack(t_push_swap *s);

/* error.c */
int		error(void);

/* free.c */
void	free_stacks(t_push_swap *s);

/* normalize.c */
void	normalize(t_push_swap *s);

#endif