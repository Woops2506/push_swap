#include "../push_swap.h"

void	algorithms(t_push_swap *s)
{
	if (s->int_a == 2)
		two_args_alg(s);
	else if (s->int_a == 3)
		three_int_alg(s);
	else if (s->int_a == 4)
		four_int_alg(s);
	else if (s->int_a == 5)
		five_int_alg(s);
	else if (s->int_a >= 6)
		big_algorithm(s);
}

void	two_args_alg(t_push_swap *s)
{
	if (s->pile_a[0] > s->pile_a[1])
		swap_a(s);
}

void	three_int_alg(t_push_swap *s)
{
	if (s->pile_a[0] > s->pile_a[1])
	{
		if (s->pile_a[1] < s->pile_a[2])
		{
			if (s->pile_a[0] > s->pile_a[2])
				rotate_a(s);
			else
				swap_a(s);
		}
		else
		{
			swap_a(s);
			reverse_rotate_a(s);
		}
	}
	else
	{
		if (s->pile_a[0] > s->pile_a[2])
			reverse_rotate_a(s);
		else
			three_alg_help(s);
	}
}

void	four_int_alg(t_push_swap *s)
{
	find_smallest(s);
	push_up(s);
	if (!check_order(s))
	{
		push_b(s);
		three_int_alg(s);
		push_a(s);
	}
}

void	five_int_alg(t_push_swap *s)
{
	find_smallest(s);
	push_up(s);
	if (!check_order(s))
	{
		push_b(s);
		four_int_alg(s);
		push_a(s);
	}
}
